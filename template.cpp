#include <iostream>
#define SIZE 10
using namespace std;
template <class T>
class Queue
{
protected:
    T arr[SIZE];
    int front;
    int rear;
public:
    Queue()
    {
        front=-1;
        rear=-1;
    }
};
template <class T>
class Linear_q:public Queue<T>
{
public:
    void enqueue(T x)
    {
        if(this->rear==SIZE-1)
        {
            cout<<"Queue Overflow\n";
            return;
        }
        if(this->front==-1)
            this->front=0;
        this->rear++;
        this->arr[this->rear]=x;
    }
    void dequeue()
    {
        if(this->front==-1||this->front>this->rear)
        {
            cout<<"Queue Underflow\n";
            return;
        }
        cout<<"Deleted element is:"<<this->arr[this->front]<<endl;
        this->front++;
        if(this->front>this->rear)
        {
            this->front=-1;
            this->rear=-1;
        }
    }
    void display()
    {
        if(this->front==-1)
        {
            cout<<"Queue Empty\n";
            return;
        }
        for(int i=this->front;i<=this->rear;i++)
            cout<<this->arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Linear_q<int> qi;
    Linear_q<float> qf;
    Linear_q<char> qc;
    int ch,type;
    int ivalue;
    float fvalue;
    char cvalue;
    char more;
    do
    {
        cout<<"\n1. Enqueue";
        cout<<"\n2. Dequeue";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";
        cout<<"\nEnter operation: ";
        cin>>ch;
        if(ch==4)
            break;
        cout<<"\n1. Integer";
        cout<<"\n2. Float";
        cout<<"\n3. Char";
        cout<<"\nEnter data type: ";
        cin>>type;
        switch(ch)
        {
            case 1:
                do
                {
                    if(type==1)
                    {
                        cout<<"Enter value: ";
                        cin>>ivalue;
                        qi.enqueue(ivalue);
                    }
                    else if(type==2)
                    {
                        cout<<"Enter value: ";
                        cin>>fvalue;
                        qf.enqueue(fvalue);
                    }
                    else if(type==3)
                    {
                        cout<<"Enter value: ";
                        cin>>cvalue;
                        qc.enqueue(cvalue);
                    }
                    cout<<"Do you want to enqueue more? (y/n): ";
                    cin>>more;
                }while(more=='y'||more=='Y');
                break;
            case 2:
                do
                {
                    if(type==1)
                        qi.dequeue();
                    else if(type==2)
                        qf.dequeue();
                    else if(type==3)
                        qc.dequeue();
                    cout<<"Do you want to dequeue more? (y/n): ";
                    cin>>more;
                }while(more=='y'||more=='Y');
                break;
            case 3:
                if(type==1)
                    qi.display();
                else if(type==2)
                    qf.display();
                else if(type==3)
                    qc.display();
                break;
        }
    }while(1);
    return 0;
}