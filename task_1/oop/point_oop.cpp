#include <iostream>
#include <cmath>
using namespace std;

class Point {
    private:
        double x, y;
    public:
        Point(double xVal, double yVal) : x(xVal), y(yVal) {}

        double distanceFromOrigin() const {
            return sqrt(x * x + y * y);
        }

        void display() const {
            cout << "Koordinat titik\t\t: (" << x << ", " << y << ")" << endl;
        }
};

int main() {
    double x, y;
    
    cout << "Masukkan koordinat x\t: ";
    cin >> x;
    cout << "Masukkan koordinat y\t: ";
    cin >> y;

    Point p(x, y);
    
    p.display();
    cout << "Jarak dari titik asal\t: " << p.distanceFromOrigin() << endl;

    return 0;
}
