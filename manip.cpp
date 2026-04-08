#include <iostream>
using namespace std;

int main() {
    // width() → sets minimum field width
    cout.width(10);
    cout << 123 << endl;   // output:        123
    // precision() → controls digits after decimal (default format)
    cout.precision(4);
    cout << 12.34567 << endl;  // output: 12.35
    // fill() → fills empty space with given character
    cout.fill('*');
    cout.width(10);
    cout << 99 << endl;   // output: ********99
    // setf() → sets formatting flags (example: left alignment)
    cout.setf(ios::left);
    cout.width(10);
    cout << 55 << endl;   // output: 55********
    // unsetf() → removes formatting flags
    cout.unsetf(ios::left);
    cout.width(10);
    cout << 55 << endl;   // output: ********55
    return 0;
}