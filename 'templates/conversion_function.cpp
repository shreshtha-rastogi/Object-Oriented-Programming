#include <iostream>
using namespace std;
// Rupees is a user-defined class
class Rupees
{
    int money;   // data member to store rupees
public:
    // Constructor
    // Jab object create hoga to yeh constructor call hoga
    // aur money me value store karega
    Rupees(int m)
    {
        money = m;
    }
    // Conversion Function
    // Yeh function Rupees object ko int me convert karega
    // Syntax: operator data_type()
    // Return type nahi likhte
    operator int()
    {
        return money;   // object ki value return kar dega
    }
};
int main()
{
    // Object creation
    // Constructor call hoga aur money = 500 store ho jayega
    Rupees r(500);
    // User Defined to Primitive Conversion
    // yaha r ek object hai aur x int type ka hai
    // compiler automatically operator int() call karega
    // internally: x = r.operator int();
    int x = r;
    // Output
    cout << x;
    return 0;
}
















