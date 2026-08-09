#include<iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
};
int main()
{
	time a;
	cout<<"Enter first time :-"<<endl;
	cout<<"Enter hours : ";
	cin>>a.hours;
	cout<<"Enter minutes : ";
	cin>>a.minutes;
	cout<<"Enter seconds : ";
	cin>>a.seconds;
	time b;
	cout<<"Enter second time :-"<<endl;
	cout<<"Enter hours : ";
	cin>>b.hours;
	cout<<"Enter minutes : ";
	cin>>b.minutes;
	cout<<"Enter seconds : ";
	cin>>b.seconds;
	int sec1=a.hours*3600+a.minutes*60+a.seconds;
	int sec2=b.hours*3600+b.minutes*60+b.seconds;
	int totalSec=sec1+sec2;
	cout<<"Total nujmber of seconds : "<<totalSec<<endl;
	time c;
	c.hours=totalSec/3600;
	totalSec=totalSec%3600;
	c.minutes=totalSec/60;
	c.seconds=totalSec%60;
	cout<<"Total time :-"<<endl;
	cout<<c.hours<<":"<<c.minutes<<":"<<c.seconds;
}
