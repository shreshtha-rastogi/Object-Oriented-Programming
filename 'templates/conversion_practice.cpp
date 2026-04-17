#include<iostream>
using namespace std;
class B{
    public:
        int y;
        B(){};
        B(int b)
        {
            y=b;
        }
};
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
            objb.y=x/1000;
            return objb;
        }
};
int main()
{
    A obja(10);
    B objb(20);
    objb=obja;
    cout<<"a:"<<obja.x;
    cout<<"b:"<<objb.y;
    return 0;
}