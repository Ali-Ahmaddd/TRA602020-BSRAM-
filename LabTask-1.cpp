#include<iostream>
using namespace std;
struct Country
{
	string name;
	float population;
};
int main()
{
	Country a;
	cout<<"Enter the name of country : ";
	getline(cin,a.name);
	cout<<"Enter the number of population : ";
	cin>>a.population;
	cout<<"Country Information : "<<endl;
	cout<<"Name : "<<a.name<<endl;
	cout<<"Population : "<<a.population<<" Million"<<endl;
}
