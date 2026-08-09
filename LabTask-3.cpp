#include<iostream>
using namespace std;
struct car
{
	int model;
	string color;
	int price;
};
int main()
{
	car a[5];
	for(int i=0;i<5;i++)
	{
	cout<<"Enter the model of the car : ";
	cin>>a[i].model;
	cout<<"Enter the car color : ";
	cin>>a[i].color;
	cout<<"Enter the price : ";
	cin>>a[i].price;
    }
	int cprice=0;
	for(int i=1;i<5;i++)
	{
		if(a[i].price>a[cprice].price)
		{
			cprice=i;
		}
	}
	int choice=0;
	cout<<"Enter 1 to get the most costly car , Enter 2 get the details of all 5 cars : ";
	cin>>choice;
	if(choice==1)
	{
		cout<<"The most costly car is :-"<<endl;
		cout<<"The car model is : "<<a[cprice].model<<endl;
		cout<<"The car color is : "<<a[cprice].color<<endl;
		cout<<"The car price is : "<<a[cprice].price;
	}
	else if(choice==2)
	{
		cout<<"The detail of all 5 cars :-";
		for(int i=0;i<5;i++)
		{
			cout<<"Model : "<<a[i].model<<endl;
			cout<<"Car Color : "<<a[i].color<<endl;
			cout<<"Car Price : "<<a[i].price<<endl;
		}
	}
	else
	{
		cout<<"(Enter number 1 or 2)Invalid number entered!";
	}
}
