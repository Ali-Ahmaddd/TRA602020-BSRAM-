#include<iostream>
using namespace std;
struct pointToModelAPoint
{
	int p1[2];
	int p2[2];
	int p3[2];
};
int main()
{
	pointToModelAPoint a;
	cout<<"Enter coordinates for p1 : ";
	for(int i=0;i<2;i++)
	{
		cin>>a.p1[i];
	}
	cout<<"Enter the coordinates for p2 : ";
	for(int i=0;i<2;i++)
	{
		cin>>a.p2[i];
	}
	cout<<"Coordinates for p1 : ";
	cout<<a.p1[0]<<" ";
	cout<<a.p1[1]<<endl;
	cout<<"Coordinates for p2 : ";
	cout<<a.p2[0]<<" ";
	cout<<a.p2[1]<<endl;
	cout<<"Coordinates for p1+p2 are : ";
	cout<<a.p1[0]+a.p2[0]<<" "<<a.p1[1]+a.p2[1];
}
