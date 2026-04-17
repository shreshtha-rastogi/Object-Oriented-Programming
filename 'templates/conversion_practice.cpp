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
};
void main()
{
    A obja;
    B objb;
    obja=objb;
}