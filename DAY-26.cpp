#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa m1;

    m1.nama = "AFRIZAL";
    m1.umur = 31;
    m1.ipk = 3.85;

    cout << "Data Mahasiswa:\n";
    cout << "Nama: " << m1.nama << endl;
    cout << "Umur: " << m1.umur << endl;
    cout << "IPK: " << m1.ipk << endl;

    return 0;
}
