#include <iostream>
using namespace std;

int bagi(int a, int b) {
    if (b == 0)
        throw "Pembagi tidak boleh nol!";
    return a / b;
}

int main() {
    try {
        int hasil = bagi(10, 2);
        cout << "Hasil: " << hasil << endl;
    }
    catch (const char* pesan) {
        cout << "Terjadi error: " << pesan << endl;
    }

    return 0;
}
