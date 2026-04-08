#include<iostream>
#include<fstream>
#define SIZE 10
using namespace std;
class Student{
public:
int srno,roll;
char name[50];  
int marks;
void getdata()
{
cout<<"\nEnter name:";
cin>>name;
cout<<"\nEnter srno:";
cin>>srno;
cout<<"\nEnter roll no:";
cin>>roll;
cout<<"\nEnter marks:";
cin>>marks;
}
void showdata()
{
cout<<"\nname:";
cout<<name;
cout<<"\nsrno:";
cout<<srno;
cout<<"\nroll no:";
cout<<roll;
cout<<"\nMarks:";
cout<<marks;
}
};
int main()
{
Student s1[SIZE],s2[SIZE];
int ch,n;
string src;
cout<<"\n**MENU**\n";
cout<<"\n1.Add records of students";
cout<<"\n2.Find record of particular srno";
cout<<"\n3.Edit marks of particular rollno";
cout<<"\n4.Display";
do{
cout<<"\nEnter your choice:\n";
cin>>ch;
cout<<"\nEnter file name:";
cin>>src;
switch(ch)
{
case 1:
{
cout<<"\nEnter no of students:";
cin>>n;
fstream fin(src,ios::out | ios::binary);
for(int i=0;i<n;i++)
{
s1[i].getdata();
fin.write((char*)&s1[i],sizeof(Student));
}
fin.close();
break;
}
case 2:
{
    int search_sr;
    cout<<"\nEnter srno to search:";
    cin>>search_sr;
    fstream fin(src, ios::in | ios::binary);
    Student temp;
    int found = 0;
    while(fin.read((char*)&temp, sizeof(Student)))
    {
        if(temp.srno == search_sr)
        {
            temp.showdata();
            found = 1;
            break;
        }
    }
    if(found == 0)
        cout<<"\nRecord not found";
    fin.close();
    break;
}
case 3:
{
    int r, new_marks;
    cout<<"\nEnter roll no to update:";
    cin>>r;
    fstream fin(src,ios::in| ios::out |ios::binary);
    Student temp;
    int found = 0;
    while(fin.read((char*)&temp,sizeof(Student)))
    {
        if(temp.roll==r)
        {
            cout<<"\nEnter new marks:";
            cin>>new_marks;
            temp.marks = new_marks;
            fin.seekp(-sizeof(Student), ios::cur);
            fin.write((char*)&temp, sizeof(Student));
            cout<<"\nRecord updated";
            found=1;
            break;
        }
    }
    if(found==0)
        cout<<"\nRecord not found";
    fin.close();
    break;
}
case 4:
{
    fstream fin(src, ios::in | ios::binary);
    Student temp;
    while(fin.read((char*)&temp, sizeof(Student)))
    {
        temp.showdata();
    }
    fin.close();
    break;
}
case 5:
exit(0);
}
}while(1);
return 0;
}
