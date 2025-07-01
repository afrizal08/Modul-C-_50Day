#include <iostream>
using namespace std;

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    int* ptr = angka;  // pointer ke elemen pertama array

    cout << "Akses array menggunakan pointer:\n";
    for (int i = 0; i < 5; i++) {
        cout << "angka[" << i << "] = " << *(ptr + i) << endl;
    }

    return 0;
}
