#include <iostream>
using namespace std;

class A {
public:
    A(int x) {
        cout << "A constructor " << x << endl;
    }

    ~A() {
        cout << "A destructor" << endl;
    }
};

class B : public A {
public:
    B(int x,int y) : A(x) {
        cout << "B constructor " << y << endl;
    }

    ~B() {
        cout << "B destructor" << endl;
    }
};

class C : public A {
public:
    C(int x,int z) : A(x) {
        cout << "C constructor " << z << endl;
    }

    ~C() {
        cout << "C destructor" << endl;
    }
};

class D : public B, public C {
public:
    D(int x,int y,int z,int w) : B(x,y), C(x,z) {
        cout << "D constructor " << w << endl;
    }

    ~D() {
        cout << "D destructor" << endl;
    }
};

int main() {
    D obj(1,2,3,4);
}