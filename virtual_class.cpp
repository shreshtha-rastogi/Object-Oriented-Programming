#include<iostream>
#include<string.h>
#include<iomanip>
#define SIZE 20
using namespace std;
class Student{
public:
    char name[SIZE];
    int cls,roll;
    void student_data()
    {
        cout<<"\nEnter name: ";
        cin>>name;
        cout<<"Enter class: ";
        cin>>cls;
        cout<<"Enter roll no: ";
        cin>>roll;
    }
    void student_details()
    {
        cout<<"\nName: "<<name;
        cout<<"\nClass: "<<cls;
        cout<<"\nRoll no: "<<roll;
    }
};
class Academic:virtual public Student{
protected:
    int m1,m2,m3;
public:
    void academic_data()
    {
        cout<<"\nEnter maths marks: ";
        cin>>m1;
        cout<<"Enter computer marks: ";
        cin>>m2;
        cout<<"Enter science marks: ";
        cin>>m3;
    }
    void academic_details()
    {
        cout<<"\nMaths marks: "<<m1;
        cout<<"\nComputer marks: "<<m2;
        cout<<"\nScience marks: "<<m3;
    }
};
class Sports:virtual public Student{
protected:
    int s1,s2,s3;
public:
    void sport_data()
    {
        cout<<"\nEnter tennis marks: ";
        cin>>s1;
        cout<<"Enter cricket marks: ";
        cin>>s2;
        cout<<"Enter badminton marks: ";
        cin>>s3;
    }

    void sport_details()
    {
        cout<<"\nTennis marks: "<<s1;
        cout<<"\nCricket marks: "<<s2;
        cout<<"\nBadminton marks: "<<s3;
    }
};
class Result:public Academic, public Sports{
public:
    void display_result()
    {
        student_details();
        academic_details();
        sport_details();

        int total = m1+m2+m3+s1+s2+s3;
        cout<<"\nTotal Marks: "<<total;
    }
};
int main()
{
    Result r;
    r.student_data();
    r.academic_data();
    r.sport_data();
    cout<<"\n\n----- FINAL RESULT -----";
    r.display_result();
    return 0;
}
