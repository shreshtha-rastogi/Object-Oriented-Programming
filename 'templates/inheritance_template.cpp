#include <iostream>
using namespace std;

/*
Base class template
Generic data store karegi
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
};

/*
Derived class template
Base class ko inherit kar rahi hai
*/

template <class T>

class Derived : public Base<T>
{
public:

    void showData()
    {
        cout << "Value is: " << this->num << endl;
    }
};

/* -------- Main Function -------- */

int main()
{
    Derived<int> obj;

    obj.setData(100);
    obj.showData();

    return 0;
}







