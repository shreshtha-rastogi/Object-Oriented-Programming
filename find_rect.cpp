#include<iostream>
using namespace std;

class Point
{
    int x, y;

public:
    void input()
    {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }

    void display()
    {
        cout << "(" << x << "," << y << ") ";
    }

    friend void findRect(Point arr[]);
};

void findRect(Point arr[])
{
    int d2[6];
    int k = 0;

    // calculate squared distances between all pairs
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            int dx = arr[i].x - arr[j].x;
            int dy = arr[i].y - arr[j].y;
            d2[k++] = dx*dx + dy*dy;
        }
    }

    // sort distances
    for(int i = 0; i < 6; i++)
    {
        for(int j = i + 1; j < 6; j++)
        {
            if(d2[i] > d2[j])
            {
                int temp = d2[i];
                d2[i] = d2[j];
                d2[j] = temp;
            }
        }
    }

    // check rectangle condition
    if(d2[0] > 0 && d2[0] == d2[1] &&
       d2[1] == d2[2] &&
       d2[2] == d2[3] &&
       d2[4] == d2[5])
    {
        cout << "\nPoints form a Rectangle";
    }
    else
    {
        cout << "\nPoints do not form a Rectangle";
    }
}

int main()
{
    Point p[4];

    cout << "Enter 4 points:\n";
    for(int i = 0; i < 4; i++)
        p[i].input();

    cout << "\nPoints are: ";
    for(int i = 0; i < 4; i++)
        p[i].display();

    findRect(p);

    return 0;
}



