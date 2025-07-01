#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n <= 1) return 1;         // base case
    else return n * faktorial(n - 1); // recursive case
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
    return 0;
}
