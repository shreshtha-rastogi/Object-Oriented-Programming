#include <iostream>
#include <string>
using namespace std;

class Box {
private:
    int length, width, height;
    string name;

public:
    void setdata() {
        cout << "Enter box name: ";
        cin >> name;
        cout << "Enter length width height: ";
        cin >> length >> width >> height;
    }

    void getdata() {
        cout << "Box Name: " << name << endl;
        cout << "Dimensions: " << length << " " << width << " " << height << endl;
    }

    int compute_volume() {
        return length * width * height;
    }

    // friend function
    friend void compare(Box b1, Box b2);
};

void compare(Box b1, Box b2) {
    int v1 = b1.compute_volume();
    int v2 = b2.compute_volume();

    cout << "\nVolume of " << b1.name << " = " << v1 << endl;
    cout << "Volume of " << b2.name << " = " << v2 << endl;

    if (v1 > v2) {
        cout << "\nLargest Volume Box: " << b1.name;
        cout << "\nVolume = " << v1 << endl;
    }
    else if (v2 > v1) {
        cout << "\nLargest Volume Box: " << b2.name;
        cout << "\nVolume = " << v2 << endl;
    }
    else {
        cout << "\nBoth boxes have equal volume = " << v1 << endl;
    }
}

int main() {
    Box b1, b2;

    b1.setdata();
    b2.setdata();

    compare(b1, b2);

    return 0;
}
