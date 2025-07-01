#include <iostream>
using namespace std;

int main() {
    int matriks[2][3];

    // Input
    cout << "Masukkan elemen matriks 2x3:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Matriks[" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }

    // Output
    cout << "Isi matriks:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
