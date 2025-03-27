#include <iostream>
using namespace std;

enum Operator { ADD = '+', SUBTRACT = '-', MULTIPLY = '*', DIVIDE = '/' };

class Calculator {
    private:
        double num1, num2;
        char op;

        bool isValidOperator() {
            return op == '+' || op == '-' || op == '*' || op == '/';
        }

    public:
        Calculator(double a, double b, char operation) : num1(a), num2(b), op(operation) {}

        void setNumbers(double a, double b) {
            num1 = a;
            num2 = b;
        }

        void setOperator(char operation) {
            op = operation;
        }

        double calculate() {
            if (!isValidOperator()) {
                cout << "Operator tidak valid!" << endl;
                return 0;
            }
            
            if (op == ADD) return num1 + num2;
            if (op == SUBTRACT) return num1 - num2;
            if (op == MULTIPLY) return num1 * num2;
            if (op == DIVIDE) {
                if (num2 != 0) return num1 / num2;
                else {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
                    return 0;
                }
            }
            return 0;
        }
};

int main() {
    double a, b;
    char op;
    
    cout << "Masukkan angka pertama\t\t: ";
    cin >> a;
    cout << "Masukkan operator (+, -, /, *)\t: ";
    cin >> op;
    cout << "Masukkan angka kedua\t\t: ";
    cin >> b;

    Calculator calc(a, b, op);
    
    cout << "Hasil\t\t\t\t: " << calc.calculate() << endl;

    return 0;
}
