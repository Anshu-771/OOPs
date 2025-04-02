#include <iostream>

using namespace std;

class Height {
    private:
        int feet;
        int inches;

    public:
        void inputHeight() {
            cout << "Enter height (feet inches): ";
            cin >> feet >> inches;
        }

        void displayHeight() {
            cout << feet << " feet " << inches << " inches" << endl;
        }

        Height addHeights(Height h) {
            Height total;
            total.inches = inches + h.inches;
            total.feet = feet + h.feet + total.inches / 12;
            total.inches %= 12;
            return total;
        }
};

int main() {
    Height student1, student2, totalHeight;

    cout << "Enter height for student 1:\n";
    student1.inputHeight();

    cout << "Enter height for student 2:\n";
    student2.inputHeight();

    totalHeight = student1.addHeights(student2);

    cout << "\nTotal height:\n";
    totalHeight.displayHeight();

    return 0;
}
