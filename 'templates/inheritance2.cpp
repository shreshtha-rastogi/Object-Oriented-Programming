#include <iostream>
using namespace std;
/*
Template Base Class
T generic data type hai
*/
template <class T>
class Base
{
protected:
    T num;

public:

    void setData(T x)
    {
        num = x;
    }
    void showBase()
    {
        cout << "Base Value: " << num << endl;
    }
};
/*
Derived class template nahi hai
Isliye Base ka data type fix karna padega
Base<int>
*/
class Derived : public Base<int>
{
public:

    void showDerived()
    {
        cout << "Derived Accessing Value: " << num << endl;
    }
};


/* -------- Main Function -------- */

int main()
{
    Derived obj;

    obj.setData(50);     // Base function
    obj.showBase();      // Base function
    obj.showDerived();   // Derived function

    return 0;
}