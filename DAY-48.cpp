#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Tambah node di depan
void tambahDepan(Node*& head, int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = head;
    head = baru;
}

// Tampilkan semua elemen
void tampilkan(Node* head) {
    Node* temp = head;
    cout << "Isi Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    tambahDepan(head, 10);
    tambahDepan(head, 20);
    tambahDepan(head, 30);

    tampilkan(head);
    return 0;
}
