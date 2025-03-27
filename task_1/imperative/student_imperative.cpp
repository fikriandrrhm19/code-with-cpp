#include <iostream>
using namespace std;

int main() {
    string name;
    string nim;
    char grade;
    
    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin, name);
    cout << "Masukkan NIM Mahasiswa  : ";
    cin >> nim;
    cout << "Masukkan Nilai Mahasiswa (A/B/C/D/E) : ";
    cin >> grade;

    cout << "\nInformasi Mahasiswa :" << endl;
    cout << "Nama  : " << name << endl;
    cout << "NIM   : " << nim << endl;
    cout << "Nilai : " << grade << endl;
    
    return 0;
}
