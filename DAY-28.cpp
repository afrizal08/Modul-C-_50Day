#include <iostream>
using namespace std;

class Mahasiswa {
private:
    string nama;
    int umur;
    float ipk;

public:
    // Constructor default
    Mahasiswa() {
        nama = "Belum diisi";
        umur = 0;
        ipk = 0.0;
    }

    // Constructor dengan parameter
    Mahasiswa(string n, int u, float i) {
        nama = n;
        umur = u;
        ipk = i;
    }

    void tampil() {
        cout << "Nama: " << nama << ", Umur: " << umur << ", IPK: " << ipk << endl;
    }
};

int main() {
    Mahasiswa m1("Afrizal",31, 3.90);
    Mahasiswa m2("Awal", 20, 3.88); // panggil constructor dengan parameter

    cout << "Mahasiswa 1:\n"; m1.tampil();
    cout << "Mahasiswa 2:\n"; m2.tampil();

    return 0;
}
