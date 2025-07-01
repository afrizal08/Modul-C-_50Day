#include <iostream>
using namespace std;

void salam() {
    cout << "=== Kalkulator Sederhana ===" << endl;
}

void cetakHasil(string operasi, int hasil) {
    cout << "Hasil " << operasi << ": " << hasil << endl;
}

int tambah(int a, int b) {
    return a + b;
}

int main() {
    salam();
    int x = 5, y = 3;
    int hasil = tambah(x, y);
    cetakHasil("penjumlahan", hasil);
    return 0;
}
