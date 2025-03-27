#include <iostream>
using namespace std;

double calculate(double num1, double num2, char op) {
    if (op == '+') return num1 + num2;
    else if (op == '-') return num1 - num2;
    else if (op == '*') return num1 * num2;
    else if (op == '/') {
        if (num2 != 0) return num1 / num2;
        else {
            cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            return 0;
        }
    }
    else {
        cout << "Operator tidak valid!" << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char op;
    
    cout << "Masukkan angka pertama\t\t: ";
    cin >> num1;
    cout << "Masukkan operator (+, -, /, *)\t: ";
    cin >> op;
    cout << "Masukkan angka kedua\t\t: ";
    cin >> num2;
    
    double result = calculate(num1, num2, op);
    cout << "Hasil\t\t\t\t: " << result << endl;

    return 0;
}
