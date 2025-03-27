#include <iostream>
using namespace std;

int main() {
    double length, width, area;

    cout << "Masukkan panjang persegi panjang : ";
    cin >> length;
    cout << "Masukkan lebar persegi panjang   : ";
    cin >> width;

    area = length * width;

    cout << "Luas persegi panjang : " << area << endl;

    return 0;
}
