#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

// Fungsi tambah data
void tambahData(vector<Mahasiswa>& data) {
    Mahasiswa m;
    cout << "Nama  : "; cin.ignore(); getline(cin, m.nama);
    cout << "Umur  : "; cin >> m.umur;
    cout << "IPK   : "; cin >> m.ipk;
    data.push_back(m);
}

// Fungsi tampilkan data
void tampilkanData(const vector<Mahasiswa>& data) {
    cout << "\n=== Daftar Mahasiswa ===\n";
    for (size_t i = 0; i < data.size(); i++) {
        cout << i+1 << ". " << data[i].nama << " | Umur: " 
             << data[i].umur << " | IPK: " << data[i].ipk << endl;
    }
}

// Fungsi hitung rata-rata IPK
void rataIPK(const vector<Mahasiswa>& data) {
    float total = 0;
    for (auto& m : data) {
        total += m.ipk;
    }
    cout << "Rata-rata IPK: " << (data.empty() ? 0 : total / data.size()) << endl;
}

// Simpan ke file
void simpanFile(const vector<Mahasiswa>& data) {
    ofstream file("nilai.txt");
    for (auto& m : data) {
        file << m.nama << ";" << m.umur << ";" << m.ipk << endl;
    }
    file.close();
    cout << "Data disimpan ke 'nilai.txt'\n";
}

// Baca dari file
void bacaFile(vector<Mahasiswa>& data) {
    ifstream file("nilai.txt");
    string line;
    data.clear();
    while (getline(file, line)) {
        Mahasiswa m;
        size_t pos1 = line.find(';');
        size_t pos2 = line.rfind(';');
        m.nama = line.substr(0, pos1);
        m.umur = stoi(line.substr(pos1 + 1, pos2 - pos1 - 1));
        m.ipk = stof(line.substr(pos2 + 1));
        data.push_back(m);
    }
    file.close();
    cout << "Data dibaca dari 'nilai.txt'\n";
}

int main() {
    vector<Mahasiswa> data;
    int pilihan;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Tampilkan Data\n";
        cout << "3. Hitung Rata-rata IPK\n";
        cout << "4. Simpan ke File\n";
        cout << "5. Baca dari File\n";
        cout << "0. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: tambahData(data); break;
            case 2: tampilkanData(data); break;
            case 3: rataIPK(data); break;
            case 4: simpanFile(data); break;
            case 5: bacaFile(data); break;
            case 0: cout << "Program selesai.\n"; break;
            default: cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);

    return 0;
}
