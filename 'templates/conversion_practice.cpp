#include<iostream>
using namespace std;
class B;
class A{
    public:
        int x;
        A(int a)
        {
            x=a;
        }
        operator B()
        {
            B objb;
            objb.y=x;
            return objb;
        }
};
class B{
    public:
        int y;
        B(){};
        B(int b)
        {
            y=b;
        }
};
void main()
{
    A obja(10);
    B objb(20);
    objb=obja;
    cout<<obja.x;
    cout<<objb.y;
}