#include <iostream>
using namespace std;

// Struct Alamat
struct Alamat {
    string jalan;
    string kota;
    int kodePos;
};

// Struct Mahasiswa
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // Struct di dalam struct
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan data mahasiswa:\n";
    cout << "Nama: ";
    getline(cin, mhs.nama);
    cout << "Umur: ";
    cin >> mhs.umur;
    cout << "IPK: ";
    cin >> mhs.ipk;
    cin.ignore();
    cout << "Alamat Jalan: ";
    getline(cin, mhs.alamat.jalan);
    cout << "Kota: ";
    getline(cin, mhs.alamat.kota);
    cout << "Kode Pos: ";
    cin >> mhs.alamat.kodePos;

    cout << "\nData Mahasiswa:\n";
    cout << "Nama: " << mhs.nama << endl;
    cout << "Umur: " << mhs.umur << " tahun" << endl;
    cout << "IPK: " << mhs.ipk << endl;
    cout << "Alamat: " << mhs.alamat.jalan << ", " << mhs.alamat.kota << " " << mhs.alamat.kodePos << endl;

    return 0;
}
