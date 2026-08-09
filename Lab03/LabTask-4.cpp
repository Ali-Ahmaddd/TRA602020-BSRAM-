#include<iostream>
using namespace std;
struct phone
{
	int areaCode;
	int exchange;
	int number;
};
int main()
{
	phone a={212,767,8900};
	phone b;
	cout<<"Enter your area code, exchange and number : "<<endl;
	cin>>b.areaCode>>b.exchange>>b.number;
	cout<<"My number is : ("<<a.areaCode<<")"<<" "<<a.exchange<<"-"<<a.number<<endl;
	cout<<"Your number is : ("<<b.areaCode<<")"<<" "<<b.exchange<<"-"<<b.number;
}
