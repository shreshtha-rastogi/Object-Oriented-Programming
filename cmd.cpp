#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[])
{
    int choice;
    cout<<"1. Copy File\n";
    cout<<"2. Display File\n";
    cout<<"3. Exit\n";
    do
    {
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
{
case 1:
    {
        ifstream src(argv[1]);
        ofstream dst(argv[2]);
        if(!src)
        {
            cout<<"Source file not found!";
            return 0;
        }
        char ch;
        while(src.get(ch))
        {
            dst.put(ch);
        }
        cout<<"File copied successfully!";
        src.close();
        dst.close();
        break;
    }
    case 2:
    {
        ifstream file(argv[1]);
        if(!file)
        {
            cout<<"File not found!";
            return 0;
        }
        char ch;
        while(file.get(ch))
        {
            cout<<ch;
        }
        file.close();
        break;
    }
    case 3:
        exit(0);
}
}while(1);
    return 0;
}