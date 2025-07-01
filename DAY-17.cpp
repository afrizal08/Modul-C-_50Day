#include <iostream>
using namespace std;

// Mendefinisikan struct Mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa mhs1;

    cout << "Masukkan nama: ";
    getline(cin, mhs1.nama);
    cout << "Masukkan umur: ";
    cin >> mhs1.umur;
    cout << "Masukkan IPK: ";
    cin >> mhs1.ipk;

    cout << "\nData Mahasiswa:\n";
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Umur: " << mhs1.umur << " tahun" << endl;
    cout << "IPK: " << mhs1.ipk << endl;

    return 0;
}
