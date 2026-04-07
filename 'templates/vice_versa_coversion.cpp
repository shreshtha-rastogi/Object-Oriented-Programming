#include <iostream>
using namespace std;

// User defined class
class Rupees
{
    int money;   // data member

public:

    // Constructor
    // Yeh constructor int value ko Rupees object me convert karega
    // Yaha primitive (int) ko user defined (Rupees) me convert kar rahe hain
    Rupees(int m)
    {
        money = m;
    }

    // Display function
    void show()
    {
        cout << money;
    }
};

int main()
{
    // Primitive variable
    int x = 500;

    // Primitive to User Defined Conversion
    // Compiler internally call karega constructor
    // Rupees r = Rupees(500)

    Rupees r = x;

    // Output
    r.show();

    return 0;
}