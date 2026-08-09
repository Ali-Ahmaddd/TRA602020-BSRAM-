#include<iostream>
using namespace std;
struct result
{
	int marks;
	char grade;
};
struct record
{
	int roll;
	result a;
};
int main()
{
	record data;
	cout<<"Enter the roll no: ";
	cin>>data.roll;
	cout<<"Enter marks: ";
	cin>>data.a.marks;
	cout<<"Enter the grade: ";
	cin>>data.a.grade;
	cout<<"Student Data:-"<<endl;
	cout<<"The roll no: "<<data.roll<<endl;
	cout<<"Marks: "<<data.a.marks<<endl;
	cout<<"Grade: "<<data.a.grade;
}
