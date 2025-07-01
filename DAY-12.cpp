#include <iostream>
using namespace std;

int main() {
    int angka[5];

    cout << "Masukkan 5 angka:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    cout << "Data yang Anda masukkan:\n";
    for (int i = 0; i < 5; i++) {
        cout << "angka[" << i << "] = " << angka[i] << endl;
    }

    return 0;
}
