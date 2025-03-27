#include <iostream>
using namespace std;

class Counter {
    private:
        int count;
    public:
        Counter() : count(0) {}

        void increment() {
            count++;
        }

        int getCount() {
            return count;
        }
};

int main() {
    Counter counter;
    char choice;

    do {
        counter.increment();
        cout << "Nilai saat ini\t\t: " << counter.getCount() << endl;
        cout << "Tambahkan lagi? (y/n)\t: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Nilai akhir counter\t: " << counter.getCount() << endl;
    return 0;
}
