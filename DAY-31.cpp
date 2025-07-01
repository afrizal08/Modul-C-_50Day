#include <iostream>
using namespace std;

class Hewan {
public:
    virtual void suara() {
        cout << "Hewan bersuara umum\n";
    }
};

class Kucing : public Hewan {
public:
    void suara() override {
        cout << "Meong!\n";
    }
};

class Anjing : public Hewan {
public:
    void suara() override {
        cout << "Guk guk!\n";
    }
};

int main() {
    Hewan* h1;
    Kucing k;
    Anjing a;

    h1 = &k;
    h1->suara(); // Meong!

    h1 = &a;
    h1->suara(); // Guk guk!

    return 0;
}
