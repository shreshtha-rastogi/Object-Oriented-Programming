#include<iostream>
using namespace std;

class B; 
class C;

// 🔹 Class A → B using conversion function
class A{
public:
    int x;
    A(int a)
    {
        x = a;
    }

    operator B();
};

// 🔹 Class B → C using constructor
class B{
public:
    int y;
    B(){}

    B(int val)
    {
        y = val;
    }

    // constructor conversion
    B(A obj)
    {
        y = obj.x;
    }

    operator C();  // B → C
};

// 🔹 Class C
class C{
public:
    int z;

    C(){}
    
    // constructor conversion from B
    C(B obj)
    {
        z = obj.y;
    }
};

// define A → B
A::operator B()
{
    return B(x);
}

// define B → C
B::operator C()
{
    return C(y);
}

int main()
{
    A obja(10);

    // A → B (no ambiguity)
    B objb = obja;

    // B → C (no ambiguity)
    C objc = objb;

    cout << objb.y << " " << objc.z;
}