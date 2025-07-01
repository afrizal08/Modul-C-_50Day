#include <iostream>
using namespace std;

const int MAX = 100;
int stack[MAX];
int top = -1;

void push(int x) {
    if (top >= MAX - 1) {
        cout << "Stack penuh!\n";
    } else {
        stack[++top] = x;
        cout << "Masuk: " << x << endl;
    }
}

void pop() {
    if (top < 0) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Keluar: " << stack[top--] << endl;
    }
}

void peek() {
    if (top < 0) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Teratas: " << stack[top] << endl;
    }
}

void tampilkan() {
    if (top < 0) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Isi Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    peek();
    pop();
    tampilkan();
    return 0;
}
