#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int umur;
    string kota;
    string status;

    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    cout << "Masukkan umur Anda: ";
    cin >> umur;
    cin.ignore(); 

    cout << "Kota asal: ";
    getline(cin, kota);

    cout << "Status pelajar/mahasiswa: ";
    getline(cin, status);

    cout << "\nHalo " << nama << endl;
    cout << "Umur Anda " << umur << " tahun." << endl;
    cout << "Kota Asal: " << kota << endl;
    cout << "Status Anda: " << status << endl;

    return 0;
}
