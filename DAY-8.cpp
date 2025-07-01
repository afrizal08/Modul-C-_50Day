#include <iostream>
using namespace std;

int main() {
    int a, b, pilihan;

    cout << "Masukkan dua bilangan: ";
    cin >> a >> b;

    cout << "Pilih operasi:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Hasil: " << a + b << endl;
            break;
        case 2:
            cout << "Hasil: " << a - b << endl;
            break;
        case 3:
            cout << "Hasil: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Hasil: " << a / b << endl;
            else
                cout << "Error: Pembagi tidak boleh nol!" << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}
