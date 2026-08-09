#include<iostream>
using namespace std;
struct date
{
	string day;
	string month;
	int year;
};
struct phonebook
{
	string name;
	string city;
	string phoneNumber;
	date d;
};
int main()
{
	phonebook a;
	cout<<"Enter the day : ";
	getline(cin,a.d.day);
	cout<<"Enter the month : ";
	getline(cin,a.d.month);
	cout<<"Enter the year : ";
	cin>>a.d.year;
	cout<<"Enter the name : ";
	cin.ignore();
	getline(cin,a.name);
	cout<<"Enter the city : ";
	getline(cin,a.city);
	cout<<"Enter the phone number : ";
	getline(cin,a.phoneNumber);
	cout<<endl;
	cout<<"Day : "<<a.d.day<<endl;
	cout<<"Month : "<<a.d.month<<endl;
	cout<<"Year : "<<a.d.year<<endl;
	cout<<"Name : "<<a.name<<endl;
	cout<<"City : "<<a.city<<endl;
	cout<<"Phone number : "<<a.phoneNumber<<endl;
}
