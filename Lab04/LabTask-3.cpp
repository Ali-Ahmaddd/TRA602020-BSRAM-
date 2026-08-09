#include<iostream>
using namespace std;
struct math
{
	int real;
	int imgry;
};
void add(math a,math b)
{
	int x=0;
	int y=0;
	x=a.real+b.real;
	y=a.imgry+b.imgry;
	cout<<x<<"+"<<y<<"i"<<endl;
}
void sub(math a,math b)
{
	int x=0;
	int y=0;
	x=a.real-b.real;
	y=a.imgry-b.imgry;
	cout<<x<<"+"<<y<<"i"<<endl;
}
void mult(math a,math b)
{
	int x=0;
	int y=0;
    x = (a.real * b.real) - (a.imgry * b.imgry);
    y = (a.real * b.imgry) + (a.imgry * b.real);
    cout << x << "+" << y << "i" << endl;
}
int main()
{
	math a;
	cout<<"Enter the first real number : ";
	cin>>a.real;
	cout<<"Enter the first imaginary number : ";
	cin>>a.imgry;
	math b;
	cout<<"Enter the second real number : ";
	cin>>b.real;
	cout<<"Enter the second imaginary number : ";
	cin>>b.imgry;
	add(a,b);
	sub(a,b);
	mult(a,b);
}
