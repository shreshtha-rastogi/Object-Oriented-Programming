#include <iostream>
using namespace std;

class Base{
public:
    virtual void show(){
        cout << "This is Base class show function" << endl;
    }
};

class Derived : public Base{
public:
    void show(){
        cout << "This is Derived class show function" << endl;
    }
};

int main(){

    Base *ptr;      // base class pointer
    Derived obj;    // derived object

    ptr = &obj;     // pointer points to derived object

    ptr->show();    // virtual function call

}