#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    
    cout << "Masukkan koordinat x\t: ";
    cin >> x;
    cout << "Masukkan koordinat y\t: ";
    cin >> y;

    cout << "Koordinat titik\t\t: (" << x << ", " << y << ")" << endl;

    double distance = sqrt(x * x + y * y);

    cout << "Jarak dari titik asal\t: " << distance << endl;
    return 0;
}
