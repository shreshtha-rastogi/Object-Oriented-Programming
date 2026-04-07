#include <iostream>
using namespace std;

/*
Function Template for Swapping
template <class T>
T ek generic data type hai.
Ye function int, float, double, char sab ko swap kar sakta hai.
*/

template <class T>
void swapNumbers(T &a, T &b)
{
    T temp;        // temporary variable
    temp = a;      // a ko temp me store kiya
    a = b;         // b ko a me daala
    b = temp;      // temp ko b me daala
}

/* ---------------- MAIN FUNCTION ---------------- */

int main()
{
    /*
    Integer swapping
    */
    int x = 10, y = 20;

    cout << "Before Swapping (int): ";
    cout << x << " " << y << endl;

    swapNumbers(x, y);   // function template call

    cout << "After Swapping (int): ";
    cout << x << " " << y << endl;


    cout << endl;


    /*
    Float swapping
    */
    float a = 2.5, b = 5.5;

    cout << "Before Swapping (float): ";
    cout << a << " " << b << endl;

    swapNumbers(a, b);   // function template call

    cout << "After Swapping (float): ";
    cout << a << " " << b << endl;

    return 0;
}