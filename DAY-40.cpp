#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int* data = new int[n]; // alokasi memori dinamis

    for (int i = 0; i < n; i++) {
        cout << "data[" << i << "] = ";
        cin >> data[i];
    }

    cout << "\nIsi array:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    delete[] data; // bebasin memori
    return 0;
}
