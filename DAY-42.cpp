#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

// Fungsi untuk menampilkan data
void tampilkan(Mahasiswa m) {
    cout << "Nama: " << m.nama << endl;
    cout << "Umur: " << m.umur << endl;
    cout << "IPK : " << m.ipk << endl;
}

int main() {
    Mahasiswa m1 = {"Afrizal", 31, 3.75};
    tampilkan(m1);
    return 0;
}
