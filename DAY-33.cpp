#include <iostream>
using namespace std;

class Induk {
public:
    Induk() {
        cout << "Constructor Induk dipanggil\n";
    }

    ~Induk() {
        cout << "Destructor Induk dipanggil\n";
    }
};

class Anak : public Induk {
public:
    Anak() {
        cout << "Constructor Anak dipanggil\n";
    }

    ~Anak() {
        cout << "Destructor Anak dipanggil\n";
    }
};

int main() {
    Anak obj;
    return 0;
}
