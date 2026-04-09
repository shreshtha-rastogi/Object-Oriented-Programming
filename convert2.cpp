#include <iostream>
#include <iomanip>   // for setbase
using namespace std;
// user-defined manipulator using manipulators (not setf)
ostream& baseConvert(ostream& out, int num, int base) {
    // manipulator use kar rahe hain instead of ios::setf
    if (base == 10)
        out << dec;   // decimal
    else if (base == 16)
        out << hex;   // hexadecimal
    else if (base == 8)
        out << oct;   // octal
    else {
        out << "Base not supported";
        return out;
    }
    out << num;   // number print with selected base
    return out;
}
int main() {
    int choice, num, base;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Convert Number\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number: ";
                cin >> num;
                cout << "Enter base (8, 10, 16): ";
                cin >> base;

                cout << "Converted value: ";
                baseConvert(cout, num, base); // custom manipulator call
                cout << endl;
                break;

            case 2:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (1);
    return 0;
}