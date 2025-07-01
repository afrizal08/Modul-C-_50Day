#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void tambahSiswa() {
    ofstream file("siswa.txt", ios::app);
    string nama;
    cout << "Masukkan nama siswa: ";
    getline(cin, nama);
    file << nama << endl;
    file.close();
}

void tampilkanSiswa() {
    ifstream file("siswa.txt");
    string nama;
    cout << "\nDaftar siswa:\n";
    while (getline(file, nama)) {
        cout << "- " << nama << endl;
    }
    file.close();
}

int main() {
    tambahSiswa();
    tampilkanSiswa();
    return 0;
}
