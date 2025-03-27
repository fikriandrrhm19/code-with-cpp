#include <iostream>
using namespace std;

int main() {
    int count = 0;
    char choice;

    do {
        count++;
        cout << "Nilai saat ini\t\t: " << count << endl;
        cout << "Tambahkan lagi? (y/n)\t: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Nilai akhir counter\t: " << count << endl;
    return 0;
}
