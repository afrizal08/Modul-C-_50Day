#include <iostream>
using namespace std;

class Mahasiswa {
public:
    string nama;

    Mahasiswa(string n) {
        nama = n;
        cout << "Constructor dipanggil untuk " << nama << endl;
    }

    ~Mahasiswa() {
        cout << "Destructor dipanggil untuk " << nama << endl;
    }
};

int main() {
    Mahasiswa m1("Awalidina");
    {
        Mahasiswa m2("Faiq");
    } // m2 dihancurkan di sini

    return 0;
}
