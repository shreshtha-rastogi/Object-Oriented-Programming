#include<iostream>
using namespace std;
class B;   // forward declaration
class A{
    public:
        int x;
        A(int a)
        {
            x = a;
        }
        // declare conversion function
        operator B();
};
class B{
    public:
        int y;
        B(){}
        // constructor for conversion
        B(A obj)
        {
            y = obj.x;
        }
};
// define conversion function AFTER B is fully known
A::operator B()
{
    B objb;
    objb.y = x;
    return objb;
}
int main()
{
    A obja(10);
    // 🔹 Conversion using constructor
    B objb1 = obja;
    // objb2 = obja;
    cout << objb1.y;
}





