#include<iostream>
using namespace std;
struct book
{
	int id;
	int price;
	int nop;
};
int main()
{
	book b[2];
	book *ptr;
	ptr=b;
	cout<<"Enter the details :-"<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter the detail for book "<<i+1<<endl;
		cout<<"Enter the ID : ";
		cin>>b[i].id;
		cout<<"Enter the price : ";
		cin>>b[i].price;
		cout<<"Enter the number of pages in the book : ";
		cin>>b[i].nop;
	}
	int choice;
	cout<<"Enter your choice :-"<<endl;
	cout<<"1 . Show details "<<endl;
	cout<<"2 . Enter details again "<<endl;
	cin>>choice;
	if(choice==1)
	{
		if(b[0].price>b[1].price)
		{
			cout<<"The price of most costly book : "<<(ptr)->price<<endl;
		}
		else
		{
			cout<<"The price of most costly book : "<<(ptr+1)->price<<endl;
		}
	}
	if(choice==2)
	{
		cout<<"Enter the details again :-"<<endl;
		for(int i=0;i<2;i++)
		{
			cout<<"Enter the details for the book "<<i<<endl;
			cout<<"ID : ";
			cin>>b[i].id;
			cout<<"Price : ";
			cin>>b[i].price;
			cout<<"Number of pages : ";
			cin>>b[i].nop;
		}
		cout<<endl;
		cout<<"Book Details:-"<<endl;
	    for(int i=0;i<2;i++)
	    {
		    cout<<"Details of book "<<i+1<<endl;
		    cout<<"ID : "<<b[i].id<<endl;
		    cout<<"Price : "<<b[i].price<<endl;
		    cout<<"Number of pages : "<<b[i].nop<<endl;
	    }
	}
}
