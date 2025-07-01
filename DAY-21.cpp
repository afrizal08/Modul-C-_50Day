#include <iostream>
using namespace std;

// Fungsi untuk menukar nilai
void tukar(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Sebelum ditukar:\n";
    cout << "a = " << a << ", b = " << b << endl;

    tukar(&a, &b); // kirim alamat a dan b

    cout << "Setelah ditukar:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
