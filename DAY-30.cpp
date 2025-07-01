#include <iostream>
using namespace std;

// Base class
class Kendaraan {
public:
    string merek;

    void jalan() {
        cout << merek << " sedang berjalan." << endl;
    }
};

// Derived class
class Mobil : public Kendaraan {
public:
    int jumlahPintu;

    void info() {
        cout << "Mobil " << merek << " punya " << jumlahPintu << " pintu." << endl;
    }
};

int main() {
    Mobil m;
    m.merek = "Toyota";
    m.jumlahPintu = 4;

    m.jalan(); // fungsi dari base class
    m.info();  // fungsi dari derived class

    return 0;
}
