#include <iostream>
#include <iomanip>   // for parameterized manipulators
using namespace std;
int main() {
    // ---------------- WIDTH ----------------
    cout.width(10);               // function style
    cout << 123 << endl;          // output:        123
    cout << setw(10) << 123 << endl;   // manipulator style
    // output:        123

    // ---------------- PRECISION ----------------
    cout.precision(4);            // function style
    cout << 12.34567 << endl;     // output: 12.35
    cout << setprecision(4) << 12.34567 << endl; // manipulator style
    // output: 12.35
    // ---------------- FILL ----------------
    cout.fill('*');               // function style
    cout.width(10);
    cout << 99 << endl;           // output: ********99

    cout << setfill('#') << setw(10) << 99 << endl; // manipulator style
    // output: ########99
    // ---------------- BASE ----------------
    cout.setf(ios::hex, ios::basefield);  // function style
    cout << 100 << endl;                  // output: 64
    cout << setbase(16) << 100 << endl;   // manipulator style
    // output: 64
    // ---------------- FLAGS ----------------
    cout.setf(ios::showpos);      // function style
    cout << 100 << endl;          // output: +100
    cout << setiosflags(ios::showpos) << 100 << endl; // manipulator style
    // output: +100
    // ---------------- UNSET FLAGS ----------------
    cout.unsetf(ios::showpos);    // function style
    cout << 100 << endl;          // output: 100
    cout << resetiosflags(ios::showpos) << 100 << endl; // manipulator style
    // output: 100
    return 0;
}