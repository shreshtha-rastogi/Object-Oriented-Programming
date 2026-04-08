#include <iostream>
using namespace std;

// user-defined manipulator with binary support
ostream& baseConvert(ostream& out, int num, int base) {
    if (base == 10)
        out << dec;   // decimal
    else if (base == 16)
        out << hex;   // hexadecimal
    else if (base == 8)
        out << oct;   // octal
    else if (base == 2) {
        // binary conversion manually
        string result = "";
        int temp = num;
        while (temp > 0) {
            result = char((temp % 2) + '0') + result;
            temp /= 2;
        }
        if (result == "") 
            result = "0";
        out << result;
        return out;
    }
    else {
        out << "Base not supported";
        return out;
    }
    out << num;
    return out;
}
int main() {
    int num, base;
    cout << "Enter number: ";
    cin >> num;
    cout << "Enter base (2, 8, 10, 16): ";
    cin >> base;
    cout << "Converted value: ";
    baseConvert(cout, num, base);
    cout << endl;
    return 0;
}