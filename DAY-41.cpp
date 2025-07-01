#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kali(int a, int b) {
    return a * b;
}

int main() {
    int (*fungsi)(int, int);  // pointer ke fungsi
    fungsi = tambah;
    cout << "Hasil tambah: " << fungsi(3, 4) << endl;

    fungsi = kali;
    cout << "Hasil kali: " << fungsi(3, 4) << endl;
    return 0;
}
