#include <iostream>
using namespace std;

int main() {
    int angka = 10;
    int* ptr; // pointer ke int

    ptr = &angka; // ptr menyimpan alamat dari angka

    cout << "Nilai dari angka: " << angka << endl;
    cout << "Alamat dari angka: " << &angka << endl;
    cout << "Alamat yang disimpan dalam ptr: " << ptr << endl;
    cout << "Nilai yang ditunjuk oleh ptr: " << *ptr << endl;

    return 0;
}
