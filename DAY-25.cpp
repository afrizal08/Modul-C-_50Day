#include <iostream>
using namespace std;

int main() {
    int baris, kolom;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    // Alokasi array 2D
    int** matriks = new int*[baris];
    for (int i = 0; i < baris; i++) {
        matriks[i] = new int[kolom];
    }

    // Input elemen
    cout << "\nMasukkan elemen matriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "matriks[" << i << "][" << j << "] = ";
            cin >> matriks[i][j];
        }
    }

    // Tampilkan elemen
    cout << "\nMatriks:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    // Dealokasi memori
    for (int i = 0; i < baris; i++) {
        delete[] matriks[i];
    }
    delete[] matriks;
    matriks = nullptr;

    return 0;
}
