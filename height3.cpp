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
    Height students[5], totalHeight;
    for (int i = 0; i < 5; i++) {
        cout << "Enter height for student " << i + 1 << ":\n";
        students[i].inputHeight();
        totalHeight = totalHeight.addHeights(students[i]);
    }

    cout << "\nTotal height:\n";
    totalHeight.displayHeight();

    return 0;
}
