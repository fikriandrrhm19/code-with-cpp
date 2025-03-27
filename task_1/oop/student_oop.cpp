#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        string nim;
        char grade;
    public:
        Student(string studentName, string studentNIM, char studentGrade) 
            : name(studentName), nim(studentNIM), grade(studentGrade) {}

        void setName(string studentName) {
            name = studentName;
        }

        void setID(string studentNIM) {
            nim = studentNIM;
        }

        void setGrade(char studentGrade) {
            grade = studentGrade;
        }

        void displayInfo() {
            cout << "\nInformasi Mahasiswa :" << endl;
            cout << "Nama  : " << name << endl;
            cout << "NIM   : " << nim << endl;
            cout << "Nilai : " << grade << endl;
        }
};

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

    Student student(name, nim, grade);

    student.displayInfo();

    return 0;
}
