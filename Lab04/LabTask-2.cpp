#include<iostream>
using namespace std;
struct data
{
	string name;
	string color;
};
struct car
{
	int model;
	int topSpeed;
	int gears;
	data a;
};
int main()
{
	car b;
	cout<<"Enter the car name : ";
	cin>>b.a.name;
	cout<<"Enter the car color : ";
	cin>>b.a.color;
	cout<<"Enter the model of the car : ";
	cin>>b.model;
	cout<<"Enter the top speed of the car : ";
	cin>>b.topSpeed;
	cout<<"Enter the number of gears : ";
	cin>>b.gears;
	if(b.topSpeed>200&&b.gears>4)
	{
		cout<<"The car name is : "<<b.a.name<<endl;
		cout<<"The car color is : "<<b.a.color<<endl;
		cout<<"Model of the car is : "<<b.model<<endl;
		cout<<"Top speed of the car is : "<<b.topSpeed<<endl;
		cout<<"Number of gears are : "<<b.gears;
	}
	else
	{
		cout<<"Your car is not suitable for the race!!!";
	}
}
