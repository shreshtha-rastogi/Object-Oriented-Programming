#include<iostream>
#include<string.h>
using namespace std;
class Book{
    static int ref_count,txt_count;
    char id[20], name[20], author[20], type[20];
    int digit;

public:
    void setdata(){
        cout<<"Enter name of book:"<<endl;
        cin>>name;
        cout<<"Enter author name:"<<endl;
        cin>>author;
        cout<<"Enter digits for id: "<<endl;
        cin>>digit;
    }
    void getdata(){
        cout<<"Name of book: "<<name;
        cout<<"Author of Book: "<<author;
        cout<<"Type of book: "<<type;
        cout<<"ID of book: "<<id;
    }
    Book(char type[20]){
        char numstr[20];
        if(strcmp(type,"REF") == 0)
        {
            ref_count++;
            strcpy(id,"REF");
            sprintf(numstr,"%d",ref_count);
        }
        else if(strcmp(type,"TXT") == 0)
        {
            txt_count++;
            strcpy(id,"TXT");
            sprintf(numstr,"%d",txt_count);
        }
        else{
            cout<<"Invalid book type\n";
            strcpy(id,"INVALID");
            return;
        }
        while( strlen(numstr) < digit )
        {
            strcat(id,"0");
            digit--;
        }
        strcat(id,numstr);
    }
};
int Book::ref_count=0;
int Book::txt_count=0;
int main()
{
    int n;
    Book b1("REF");
	Book b2("TXT");
	Book b3("REF");
    cout<<"Enter no. of books:";
    cin>>n;
    cout<<"enter book 1 info: ";
    b1.setdata();
    cout<<"enter book 2 info: ";
    b2.setdata();
    cout<<"enter book 3 info: ";
    b3.setdata();
    cout<<"book 1 info: ";
    b1.getdata();
    cout<<"book 2 info: ";
    b2.getdata();
    cout<<"book 3 info: ";
    b3.getdata();
    return 0;
}
