#include <iostream>
using namespace std;

class Kotak {
private:
    int panjang;

public:
    Kotak(int p) {
        panjang = p;
    }

    // Friend function
    friend void tampilkanPanjang(Kotak k);
};

// Fungsi teman
void tampilkanPanjang(Kotak k) {
    cout << "Panjang kotak: " << k.panjang << endl; // bisa akses private!
}

int main() {
    Kotak k(15);
    tampilkanPanjang(k);
    return 0;
}
