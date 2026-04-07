#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int choice;
    string source, dest, data;
    char ch;
    cout<<"\n****MENU FOR FILE****\n";
    do{
    cout<<"\n1.Write into file\n2.Show file contents\n3.Show file contents in reverse order\n4.Copy file contents to another file\n5.Exit";
    cout<<"\nEnter your choice: ";
    cin>>choice;
    cout<<"Enter name of file: ";
    cin>>source;
    switch(choice)
    {
        case 1:
        {
            ofstream fout(source, ios::app);
            if(!fout)
            {
                cout<<"\nError opening file!";
                return 0;
            }
            cout<<"\nEnter text to write in file:\n";
            cin>>data;
            fout<<data<<endl;
            fout.close();
            cout<<"\nData written successfully!";
            break;
        }
        case 2:
        {
            ifstream fin(source);
            if(!fin)
            {
                cout<<"\nFile does not exist";
                return 0;
            }
            while(fin.get(ch))
                cout<<ch;
            fin.close();
            break;
        }
        case 3:
        {
            ifstream fin(source);
            if(!fin)
            {
                cout<<"\nFile does not exist";
                return 0;
            }
            fin.seekg(0, ios::end);
            int size = fin.tellg();
            for(int i = size - 1; i >= 0; i--)
            {
                fin.seekg(i);
                fin.get(ch);
                cout<<ch;
            }
            fin.close();
            break;
        }
        case 4:
        {
            ifstream fin(source);
            if(!fin)
            {
                cout<<"\nFile does not exist";
                return 0;
            }
            cout<<"\nEnter destination file: ";
            cin>>dest;
            ofstream fin2(dest);
            while(fin.get(ch))
                fin2.put(ch);
            fin.close();
            fin.close();
            cout<<"\nFile copied successfully!";
            break;
        }
        case 5:
            return 0;
        default:
            cout<<"\nInvalid choice";
    }
}while(1);
    return 0;
}