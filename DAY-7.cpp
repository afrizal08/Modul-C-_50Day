#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    if (nilai >= 90) {
        cout << "Grade: A" << endl;
    } else if (nilai >= 80) {
        cout << "Grade: B" << endl;
    } else if (nilai >= 70) {
        cout << "Grade: C" << endl;
    } else if (nilai >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: E (Tidak Lulus)" << endl;
    }

    return 0;
}
