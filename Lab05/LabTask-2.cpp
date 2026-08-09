#include<iostream>
using namespace std;
struct Citizen
{
    int cnicID;
    char name[30];
    char city[20];
    int age;
};
int main()
{
	Citizen c;
    Citizen *ptr;
    ptr = &c;
    cout<<"Enter the details of the citizen :-"<<endl;
    cout<<"Enter CNIC ID : ";
    cin>>ptr->cnicID;
    cin.ignore();
    cout<<"Enter Name : ";
    cin.getline(ptr->name,30);
    cout<<"Enter City : ";
    cin.getline(ptr->city,20);
    cout<<"Enter Age : ";
    cin>>ptr->age;
    cout<<endl;
    cout<<endl;
    int choice;
    cout<<"Press 1 to update city of residence, 0 to display record: 1 ";
    cin>>choice;
    if(choice==1)
    {
    	cin.ignore();
    	cout<<"Enter new city : ";
    	cin.getline(ptr->city,30);
    	cout<<endl;
	    cout<<endl;
	    cout<<"--- Updated NADRA Record ---"<<endl;
	    cout<<"CNIC ID : "<<ptr->cnicID<<endl;
	    cout<<"Name : "<<ptr->name<<endl;
	    cout<<"City : "<<ptr->city<<endl;
	    cout<<"Age : "<<ptr->age<<endl;
	}
	if(choice==0)
	{
		cout<<endl;
		cout<<endl;
	    cout<<"CNIC ID : "<<ptr->cnicID<<endl;
	    cout<<"Name : "<<ptr->name<<endl;
	    cout<<"City : "<<ptr->city<<endl;
	    cout<<"Age : "<<ptr->age<<endl;
    }
}
