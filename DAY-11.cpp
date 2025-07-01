#include <iostream>
using namespace std;

int main() {
    char ulang;

    do {
        cout << "Belajar itu menyenangkan! :)\n";
        cout << "Ingin mengulang lagi? (y/n): ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih!\n";
    return 0;
}
