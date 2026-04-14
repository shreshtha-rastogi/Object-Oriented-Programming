#include <iostream>
#include <iomanip>
using namespace std;
class Node 
{
public:
    int data;
    Node* next;
    Node()
    {
        data = 0;
        next = nullptr;
    }
    ~Node()
    {
        cout << "\ni am destructor of node ";
        cout << "Node with value " << data << " deleted.\n";
    }
};
class LinkedList 
{
private:
    Node* start;

public:
    // Constructor
    LinkedList()
    {
        start = nullptr;
        cout << "Linked List Created.\n";
    }
    // Destructor
    ~LinkedList()
    {
        cout << "\ni am destructor of linked list class\n";
        while (start != nullptr)
        {
            Node* temp = start;
            start = start->next;
            delete temp;
        }
        cout << "Linked List Destroyed.\n";
    }
    void insert(int value)
    {
        Node* nn = new Node();   // Default constructor
        nn->data = value;        // Value manually assign

        if (start == nullptr)
        {
            start = nn;
        }
        else
        {
            nn->next = start;
            start = nn;
        }
    }
    int delete_front()
    {
        if (start == nullptr)
        {
            cout << "List is empty. Cannot delete.\n";
            return -1;
        }

        Node* temp = start;
        int value = temp->data;
        start = start->next;
        delete temp;
        return value;
    }
    void display()
    {
        if (start == nullptr)
        {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = start;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    int choice;
    int ch, v;
    LinkedList list;
    cout << "\n";
    cout << setw(50) << "Linked List Implementation\n" << endl;
    cout << "1. Insert at front\n2. Delete at front\n3. Display\n5. Exit\n" << endl;
    do {
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            int value;
            do
            {
                cout << "Enter value: ";
                cin >> value;
                list.insert(value);

                cout << "Insert more? (1 for yes, 0 for no): ";
                cin >> choice;

            } while (choice != 0);
            break;
        }
        case 2:
            v = list.delete_front();
            if (v != -1)
                cout << "Deleted value: " << v << endl;
            break;
        case 3:
            list.display();
            break;
        case 4:
            cout << "Exiting...\n";
            return 0;
        }
    } while (1);
}

























































