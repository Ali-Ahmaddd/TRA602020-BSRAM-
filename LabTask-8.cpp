#include<iostream>
using namespace std;
struct date
{
	int date;
	int month;
	int year;
};
int main()
{
	date a;
	cout<<"Enter the date (date/month/year) :-";
	cin>>a.date>>a.month>>a.year;
	cout<<"The entered date :-"<<endl;
	cout<<a.date<<"/"<<a.month<<"/"<<a.year;
}
