#include<iostream>
using namespace std;
struct employee
{
	int number;
	float compensation;
};
int main()
{
	employee a;
	cout<<"Enter the detail of first employee :-"<<endl;
	cout<<"Enter the employee number : ";
	cin>>a.number;
	cout<<"Enter the compensation : ";
	cin>>a.compensation;
	employee b;
	cout<<"Enter the detail of second employee :-"<<endl;
	cout<<"Enter the employee number : ";
	cin>>b.number;
	cout<<"Enter the compensation : ";
	cin>>b.compensation;
	employee c;
	cout<<"Enter the detail of third employee :-"<<endl;
	cout<<"Enter the employee number : ";
	cin>>c.number;
	cout<<"Enter the compensation : ";
	cin>>c.compensation;
	cout<<"Information of first employee :-"<<endl;
	cout<<"Employee number : "<<a.number<<endl;
	cout<<"Compensation : "<<a.compensation<<endl;
	cout<<"Information of second employee :-"<<endl;
	cout<<"Employee number : "<<b.number<<endl;
	cout<<"Compensation : "<<b.compensation<<endl;
	cout<<"Information of third employee :-"<<endl;
	cout<<"Employee number : "<<c.number<<endl;
	cout<<"Compensation : "<<c.compensation;
}
