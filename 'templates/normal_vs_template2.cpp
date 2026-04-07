#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    cout << "Template Function\n";//isko call karega
    return a + b;
}

int add(int a, int b)
{
    cout << "Normal Function\n";
    return a + b;
}

int main()
{
    cout << add(2.5, 3.5);
}