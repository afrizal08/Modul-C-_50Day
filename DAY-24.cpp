#include <iostream>
using namespace std;

int main() {
    int* ptr = new int; // alokasi memori untuk 1 int

    *ptr = 25;
    cout << "Nilai dari memori yang dialokasikan: " << *ptr << endl;

    delete ptr; // hapus memori
    ptr = nullptr; // hindari pointer liar

    return 0;
}
