#include<iostream>
#include<string.h>
#define SIZE 50
using namespace std;
class String
{
    char s[SIZE];
    int len;
public:
    void getdata()
    {
        cout<<"\nEnter string:";
        cin>>s;
    }
    void showdata()
    {
        cout<<"Your string is:";
        cout<<s;
    }
    String operator + (String s2)
    {
        String s3;
        strcat(s,s2.s);
        strcpy(s3.s,s);
        return s3;
    }
    String operator == (String s2)
    {
        int comp= strcmp(s,s2.s);
        if(comp == 0)
        {
            cout<<"Strings are equal";
        } 
        else
            cout<<"Strings are not equal";  
    }
    int slength()
    {
        int l= strlen(s);
    }
};