#include<iostream>
using namespace std;
struct student
{
	int roll;
	int marks[5];
};
int main()
{
	student a;
	cout<<"Enter the roll no : ";
	cin>>a.roll;
	cout<<"Enter the marks of 5 subjects : "<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a.marks[i];
	}
	cout<<"Entered information : "<<endl;
	cout<<"Entered roll no : "<<a.roll<<endl;
	cout<<"Entered Marks : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Marks of subject "<<i<<" : ";
		cout<<a.marks[i];
		cout<<endl;
	}
}
