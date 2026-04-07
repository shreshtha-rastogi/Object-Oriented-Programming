#include <iostream>
using namespace std;

// Function using reference variables
int swapNumbers(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return temp;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before Swapping: x = " << x << " y = " << y << endl;

    int t=swapNumbers(x, y);   // Passing variables directly
    cout<<"********"<<t;

    cout << "After Swapping: x = " << x << " y = " << y << endl;

    return 0;
}
