#include <iostream>
using namespace std;

int main() {
    int num = 100;

    // ios::dec → decimal format (base 10)
    cout << "Decimal: ";
    cout.setf(ios::dec);
    cout << num << endl;   // output: Decimal: 100

    // ios::hex → hexadecimal format (base 16)
    cout << "Hexadecimal: ";
    cout.setf(ios::hex);
    cout << num << endl;   // output: Hexadecimal: 64

    // ios::oct → octal format (base 8)
    cout << "Octal: ";
    cout.setf(ios::oct);
    cout << num << endl;   // output: Octal: 144

    return 0;
}