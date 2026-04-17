#include<iostream>
using namespace std;
class B;
class A{
    public:
        int x;
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
}