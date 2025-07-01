#include <iostream>
using namespace std;

const int MAX = 100;
int queue[MAX];
int front = 0, rear = 0;

void enqueue(int x) {
    if (rear == MAX) {
        cout << "Queue penuh!\n";
    } else {
        queue[rear++] = x;
        cout << "Masuk: " << x << endl;
    }
}

void dequeue() {
    if (front == rear) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Keluar: " << queue[front++] << endl;
    }
}

void tampilkan() {
    if (front == rear) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Isi Queue: ";
        for (int i = front; i < rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    tampilkan();
    dequeue();
    tampilkan();
    return 0;
}
