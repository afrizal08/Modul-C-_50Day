#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.bin", ios::binary);
    int angka;
    file.read(reinterpret_cast<char*>(&angka), sizeof(angka));
    file.close();

    cout << "Isi file: " << angka << endl;
    return 0;
}
