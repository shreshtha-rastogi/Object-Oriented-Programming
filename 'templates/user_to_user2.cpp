#include <iostream>
using namespace std;

// Forward declaration
class Kilometer;

class Meter
{
    int m;

public:

    Meter(int x)
    {
        m = x;
    }

    // Conversion function
    // Meter object ko Kilometer me convert karega
    operator Kilometer();

    int getMeter()
    {
        return m;
    }
};

class Kilometer
{
    int km;

public:

    Kilometer()
    {
        km = 0;
    }

    void setKm(int x)
    {
        km = x;
    }

    void show()
    {
        cout << "Kilometer = " << km;
    }
};

// Conversion function definition
Meter::operator Kilometer()
{
    Kilometer temp;  // Kilometer object banaya

    int meterValue = m;

    temp.setKm(meterValue / 1000);

    return temp;   // Kilometer object return
}

int main()
{
    Meter m1(5000);

    // User Defined → User Defined Conversion
    // Meter object ko Kilometer me convert kar rahe hain
    // Compiler internally:
    // k1 = m1.operator Kilometer()

    Kilometer k1;

    k1 = m1;

    k1.show();

    return 0;
}