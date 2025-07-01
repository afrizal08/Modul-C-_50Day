#include <iostream>
using namespace std;

template <typename T>
T maksimum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maksimum(10, 20) << endl;       // int
    cout << maksimum(3.5, 2.1) << endl;     // double
    cout << maksimum('z', 'b') << endl;     // char

    return 0;
}
