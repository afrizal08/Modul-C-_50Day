#include <iostream>
using namespace std;

namespace Kalkulator {
    int tambah(int a, int b) {
        return a + b;
    }

    int kurang(int a, int b) {
        return a - b;
    }
}

int main() {
    cout << "5 + 3 = " << Kalkulator::tambah(5, 3) << endl;
    cout << "5 - 3 = " << Kalkulator::kurang(5, 3) << endl;
    return 0;
}
