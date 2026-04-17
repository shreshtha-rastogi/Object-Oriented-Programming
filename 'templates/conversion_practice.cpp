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
            B temp;
            temp.y=x/1000;
            return temp;
        }
};
int main()
{
    A obja(1000);
    B objb(20);
    objb=obja;
    cout<<"a(in m):"<<obja.x;
    cout<<"b(in km):"<<objb.y;
    return 0;
}