#include <iostream>
using namespace std;

class Buku {
private:
    string judul;
    string pengarang;
    int tahun;

public:
    void setData(string j, string p, int t) {
        judul = j;
        pengarang = p;
        tahun = t;
    }

    void tampil() {
        cout << "Judul: " << judul << ", Pengarang: " << pengarang << ", Tahun: " << tahun << endl;
    }
};

int main() {
    Buku b;
    b.setData("C++ Fundamentals", "Afrizal", 2025);
    b.tampil();

    return 0;
}
