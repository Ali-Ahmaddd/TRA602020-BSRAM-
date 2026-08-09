#include<iostream>
using namespace std;
struct income
{
	float income;
	float taxRate;
	float tax;
};
int main()
{
	income a[5];
	cout<<"Enter the income and tax details of 5 persons :-"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter income : ";
		cin>>a[i].income;
		cout<<"Enter tax rate (in percent %) : ";
		cin>>a[i].taxRate;
		a[i].tax=a[i].income*(a[i].taxRate/100);
	}
	cout<<"The payable tax of 5 persons :-"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"For person "<<i+1<<" the payable tax is "<<a[i].tax<<endl;
	}
}
