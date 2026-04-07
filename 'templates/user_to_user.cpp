#include <iostream>
using namespace std;

// First user defined class
class Meter
{
    int m;   // data member to store meter

public:

    // Constructor to initialize meter
    Meter(int x)
    {
        m = x;
    }

    // Function to return meter value
    int getMeter()
    {
        return m;
    }
};

// Second user defined class
class Kilometer
{
    int km;   // data member to store kilometer

public:

    // Default constructor
    Kilometer()
    {
        km = 0;
    }

    // Constructor for User Defined → User Defined Conversion
    // Yeh Meter object ko Kilometer object me convert karega
    Kilometer(Meter obj)
    {
        // Meter object ka value le rahe hain
        int meterValue = obj.getMeter();

        // meter ko kilometer me convert kar rahe hain
        km = meterValue / 1000;
    }

    // Display function
    void show()
    {
        cout << "Kilometer = " << km;
    }
};

int main()
{
    // Meter class ka object
    Meter m1(3000);

    // User Defined → User Defined Conversion
    // Meter object ko Kilometer object me convert kar rahe hain
    // Compiler internally karega:
    // Kilometer k1 = Kilometer(m1)

    Kilometer k1 = m1;

    // Output
    k1.show();

    return 0;
}