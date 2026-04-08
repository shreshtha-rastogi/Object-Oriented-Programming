#include <iostream>
using namespace std;

int main() {
    int num = 123;

    // ios::left → value left side pe, padding right me
    cout.setf(ios::left, ios::adjustfield);
    cout.width(10);
    cout << num << endl;   // output: 123_______  (spaces right side)

    // ios::right → value right side pe, padding left me (default)
    cout.setf(ios::right, ios::adjustfield);
    cout.width(10);
    cout << num << endl;   // output: _______123  (spaces left side)

    // ios::internal → sign/alag part left pe, number right shift hota hai
    cout.setf(ios::internal, ios::adjustfield);
    cout.width(10);
    cout << -123 << endl;  // output: -______123  (sign left, padding beech me)

    return 0;
}