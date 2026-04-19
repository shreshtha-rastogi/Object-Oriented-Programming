#include <iostream>
using namespace std;

/*
Template class banayi ja rahi hai
T ek generic data type hai
Queue int, float, char sab store kar sakti hai
*/

template <class T>
class Queue
{
    T arr[100];   // generic array
    int front;
    int rear;

public:
    /*
    Constructor
    Queue initially empty hogi
    */
    Queue()
    {
        front = -1;
        rear = -1;
    }

    /*
    Enqueue operation
    Queue me element insert karega
    */
    void enqueue(T x)
    {
        if (rear == 99)
        {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        arr[rear] = x;

        cout << x << " inserted in queue\n";
    }

    /*
    Dequeue operation
    Queue se element remove karega
    */
    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
            return;
        }

        cout << arr[front] << " deleted from queue\n";
        front++;
    }

    /*
    Display queue elements
    */
    void display()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};
/* ---------------- MAIN FUNCTION ---------------- */
int main()
{
    /*
    Integer Queue
    T = int
    */
    Queue<int> q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.display();
    q1.dequeue();
    q1.display();
    cout << endl;
    /*
    Float Queue
    T = float
    */
    Queue<float> q2;
    q2.enqueue(2.5);
    q2.enqueue(4.5);
    q2.display();
    return 0;
}