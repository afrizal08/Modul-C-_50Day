#include <iostream>
using namespace std;

// Struct untuk Mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    const int JUMLAH = 3;
    Mahasiswa mhs[JUMLAH];

    cout << "Input data mahasiswa:\n";
    for (int i = 0; i < JUMLAH; i++) {
        cin.ignore();
        cout << "\nMahasiswa ke-" << i+1 << endl;
        cout << "Nama: ";
        getline(cin, mhs[i].nama);
        cout << "Umur: ";
        cin >> mhs[i].umur;
        cout << "IPK: ";
        cin >> mhs[i].ipk;
    }

    cout << "\nDaftar Mahasiswa:\n";
    for (int i = 0; i < JUMLAH; i++) {
        cout << "----------------------\n";
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Umur: " << mhs[i].umur << " tahun\n";
        cout << "IPK: " << mhs[i].ipk << endl;
    }

    return 0;
}
