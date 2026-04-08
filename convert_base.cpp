#include <iostream>
using namespace std;

// user-defined manipulator using ios flags
ostream& baseConvert(ostream& out, int num, int base) {

    // base check karke proper flag set kar rahe hain
    if (base == 10)
        out.setf(ios::dec, ios::basefield);   // decimal
    else if (base == 16)
        out.setf(ios::hex, ios::basefield);   // hexadecimal
    else if (base == 8)
        out.setf(ios::oct, ios::basefield);   // octal
    else {
        out << "Base not supported";          // only 8,10,16 supported
        return out;
    }

    out << num;  // number print with selected base
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

    } while (choice != 2);

    return 0;
}