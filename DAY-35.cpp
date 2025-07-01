#include <iostream>
using namespace std;

class Poin {
private:
    int x, y;

public:
    Poin(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Overload operator +
    Poin operator+(const Poin& p) {
        return Poin(x + p.x, y + p.y);
    }

    void tampil() {
        cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    Poin p1(2, 3), p2(4, 5);
    Poin hasil = p1 + p2;

    cout << "Hasil penjumlahan: ";
    hasil.tampil();

    return 0;
}
