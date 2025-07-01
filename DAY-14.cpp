#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Masukkan dua angka: ";
    cin >> x >> y;

    cout << "Hasil penjumlahan: " << tambah(x, y) << endl;

    return 0;
}
