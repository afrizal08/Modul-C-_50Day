#include <iostream>
using namespace std;

// Abstract Class
class BangunDatar {
public:
    virtual void gambar() = 0;  // pure virtual function
    virtual float luas() = 0;   // pure virtual function
};

// Class turunan wajib override semua pure virtual function
class Persegi : public BangunDatar {
private:
    float sisi;

public:
    Persegi(float s) {
        sisi = s;
    }

    void gambar() override {
        cout << "Menggambar persegi..." << endl;
    }

    float luas() override {
        return sisi * sisi;
    }
};

int main() {
    // BangunDatar b;      // ❌ ERROR: tidak bisa membuat objek abstract class
    BangunDatar* bd;       // ✅ Bisa pointer
    Persegi p(4);

    bd = &p;
    bd->gambar();
    cout << "Luas: " << bd->luas() << endl;

    return 0;
}
