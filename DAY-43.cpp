#include <iostream>
using namespace std;

typedef unsigned int uint;

struct Buku {
    string judul;
    string pengarang;
    int tahun;
};

typedef Buku BukuFavorit;

int main() {
    BukuFavorit b1;
    b1.judul = "C++ Dasar";
    b1.pengarang = "Afrizal";
    b1.tahun = 2025;

    cout << "Judul: " << b1.judul << endl;
    cout << "Pengarang: " << b1.pengarang << endl;
    cout << "Tahun: " << b1.tahun << endl;

    uint halaman = 250;
    cout << "Jumlah Halaman: " << halaman << endl;

    return 0;
}
