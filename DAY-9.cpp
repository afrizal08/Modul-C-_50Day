#include <iostream>
using namespace std;

int main() {
    int angka = 10;

    while (angka > 0) {
        cout << "Hitung mundur: " << angka << endl;
        angka--; // kurangi 1 setiap putaran
    }

    cout << "Selesai!" << endl;
    return 0;
}
