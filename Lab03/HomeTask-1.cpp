#include<iostream>
using namespace std;
struct hotel
{
	string name;
	int dishes;
	float bill;
};
int main()
{
	hotel a[3];
	cout<<"Enter the details :-"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the hotel name : ";
		cin>>a[i].name;
		cout<<"Enter the number of dishes : ";
		cin>>a[i].dishes;
		cout<<"Enter the bill amount : ";
		cin>>a[i].bill;
	}
	float totalBill=0;
	for(int i=0;i<3;i++)
	{
		totalBill=totalBill+a[i].bill;
	}
	totalBill=totalBill+(totalBill*0.15);
	cout<<"The total bill with the tax : "<<totalBill<<endl;
	cout<<"Record :-"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Hotel"<<i+1<<endl;
		cout<<"Name : "<<a[i].name<<endl;
		cout<<"Dishes : "<<a[i].dishes<<endl;
		cout<<"Bill : "<<a[i].bill<<endl;
	}
}
