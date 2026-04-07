#include <iostream>
using namespace std;

/* ---------------- FUNCTION TEMPLATE ---------------- */

/*
template <class T>
T is a placeholder for any data type.
Compiler automatically replace T with int, float, double etc.
*/

template <class T>

T add(T a, T b)
{
    // This function adds two values of same type
    return a + b;
}

/* ---------------- CLASS TEMPLATE ---------------- */

/*
This is a generic class.
It can store any type of data.

T is used as data type of variable.
*/

template <class T>

class Box
{
    T value;   // generic data member

public:

    /*
    Constructor
    It takes value of any data type
    */
    Box(T v)
    {
        value = v;
    }

    /*
    Function to display value
    */
    void show()
    {
        cout << "Value is: " << value << endl;
    }
};


/* ---------------- MAIN FUNCTION ---------------- */

int main()
{
    /* -------- Function Template Calling -------- */

    /*
    Here compiler will treat T as int
    */
    cout << "Addition of int: " << add(10, 20) << endl;

    /*
    Here compiler will treat T as float
    */
    cout << "Addition of float: " << add(2.5, 3.5) << endl;


    /* -------- Class Template Object -------- */

    /*
    Here T = int
    So Box<int> object is created
    */
    Box<int> obj1(100);
    obj1.show();

    /*
    Here T = float
    So Box<float> object is created
    */
    Box<float> obj2(5.5);
    obj2.show();

    return 0;
}