#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");  // buka file

    if (file.is_open()) {
        file << "Halo dunia!\n";
        file << "Belajar C++ file handling.\n";
        file.close(); // wajib ditutup
        cout << "Data berhasil ditulis ke file.\n";
    } else {
        cout << "Gagal membuka file.\n";
    }

    return 0;
}
