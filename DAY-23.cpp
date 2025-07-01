#include <iostream>
using namespace std;

int main() {
    int angka = 42;
    int* ptr = &angka;     // pointer ke angka
    int** ptr2 = &ptr;     // pointer ke pointer

    cout << "Nilai angka: " << angka << endl;
    cout << "Alamat angka: " << &angka << endl;

    cout << "Nilai dari ptr (alamat angka): " << ptr << endl;
    cout << "Nilai yang ditunjuk ptr (*ptr): " << *ptr << endl;

    cout << "Nilai dari ptr2 (alamat ptr): " << ptr2 << endl;
    cout << "Nilai yang ditunjuk ptr2 (*ptr2 = ptr): " << *ptr2 << endl;
    cout << "Nilai yang ditunjuk oleh *ptr2 (**ptr2 = angka): " << **ptr2 << endl;

    return 0;
}
