#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class student{
	int avg,total;
	int per;
	int rollno;
	char name[20];
	char standard[20];
	int sub1,sub2,sub3;
public:
	void getdata();
	void showdata();
	int compute_total();
	int compute_per();
	int compute_avg();
	void display_report(int);
	void print_line(char,int);
};
void student::getdata()
{
	cout<<"Enter name:"<<endl;
	cin>>name;
	cout<<"Enter roll.:"<<endl;
	cin>>rollno;
	cout<<"Enter class:"<<endl;
	cin>>standard;
	cout<<"Enter marks:"<<endl;
	cout<<"Maths: ";
	cin>>sub1;
	cout<<"Science: ";
	cin>>sub2;
	cout<<"Computer: ";
	cin>>sub3;
};
void student::showdata()
{
	cout<<"Name:"<<name<<endl;
	cout<<"Rollno:"<<rollno<<endl;
	cout<<"Class:"<<standard<<endl;
	cout<<"Marks:"<<endl<<"Maths:"<<sub1<<endl<<"Science:"<<sub2<<endl<<"Computer:"<<sub3<<endl;
	cout<<"Total marks:";
	total=compute_total();
	cout<<total<<endl;
	cout<<"Average marks:";
	avg=compute_avg();
	cout<<avg<<endl;
	cout<<"Percentage:";
	per=compute_per();
	cout<<per<<endl;
	cout<<"\n";
	print_line('-',100);
	cout<<"\n";
};
int student::compute_total()
{
	return sub1+sub2+sub3;
}
int student::compute_avg()
{
	return (sub2+sub2+sub3)/3;
}
int student::compute_per()
{
	per=((sub1+sub2+sub3)*100)/300;
	return per;
}
void student::print_line(char ch,int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<ch;
}
int main()
{
	student s[10];
	int n,i;
	cout<<"Enter no. of students:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"***Student"<<i+1<<"***"<<endl;
		s[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		s[i].showdata();
	}
	for(i=0;i<n;i++)
	{
		system("CLS");
		s[i].display_report(i);
		getch();
	}
	return 0;
}
void student::display_report(int i)
{
	cout<<setw(50)<<"REPORT CARD\n";
	print_line('-',100);
	cout<<"\nName:"<<name<<endl;
	cout<<"Rollno:"<<rollno<<endl;
	cout<<"Class:"<<standard<<endl;
	print_line('*',100);
	cout<<"\n";
	cout<<setw(20)<<"Serial no."<<setw(20)<<"Subject name"<<setw(20)<<"Max marks"<<setw(20)<<"Obtained marks"<<setw(20)<<endl;
	cout<<setw(20)<<i+1<<setw(20)<<"Maths"<<setw(20)<<"100"<<setw(20)<<sub1<<setw(20)<<endl;
	cout<<setw(40)<<"Science"<<setw(20)<<"100"<<setw(20)<<sub2<<setw(20)<<endl;
	cout<<setw(40)<<"Computer"<<setw(20)<<"100"<<setw(20)<<sub3<<endl;
	print_line('-',100);
	cout<<"\n";
	cout<<"Total:";
	total=compute_total();
	cout<<total<<endl;
	cout<<"Percentage:";
	per=compute_per();
	cout<<per<<"%"<<endl;
	cout<<"Average:";
	avg=compute_avg();
	cout<<avg<<endl;
	print_line('-',100);
}
