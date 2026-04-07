#include <iostream>
using namespace std;

class Convert
{
    int num;
    int base;

public:
    Convert(int n, int b)
    {
        num = n;
        base = b;
    }

    friend ostream & operator<<(ostream &out, Convert c);
};

ostream & operator<<(ostream &out, Convert c)
{
    int n = c.num;
    int b = c.base;
    string result = "";

    while(n > 0)
    {
        int rem = n % b;

        if(rem < 10)
            result = char(rem + '0') + result;
        else
            result = char(rem - 10 + 'A') + result;

        n = n / b;
    }

    out << result;
    return out;
}

Convert base(int n, int b)
{
    return Convert(n, b);
}

int main()
{
    cout << base(25,2) << endl;
    cout << base(25,8) << endl;
    cout << base(25,16) << endl;

    return 0;
}