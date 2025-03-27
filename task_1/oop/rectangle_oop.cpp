#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;
    public:
        Rectangle(double l, double w) : length(l), width(w) {}

        void setLength(double l) {
            length = l;
        }

        void setWidth(double w) {
            width = w;
        }

        double getLength() {
            return length;
        }

        double getWidth() {
            return width;
        }

        double calculateArea() {
            return length * width;
        }
};

int main() {
    double length, width;

    cout << "Masukkan panjang persegi panjang : ";
    cin >> length;
    cout << "Masukkan lebar persegi panjang   : ";
    cin >> width;

    Rectangle rect(length, width);

    cout << "Luas persegi panjang : " << rect.calculateArea() << endl;

    return 0;
}
