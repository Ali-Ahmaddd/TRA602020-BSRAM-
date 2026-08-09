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
	cout<<"Enter hours : ";
	cin>>a.hours;
	cout<<"Enter minutes : ";
	cin>>a.minutes;
	cout<<"Enter seconds : ";
	cin>>a.seconds;
	long totalSec=a.hours*3600+a.minutes*60+a.seconds;
	cout<<"The total number of seconds : "<<totalSec;
}
