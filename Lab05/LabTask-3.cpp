#include<iostream>
using namespace std;
struct PetrolPump
{
    char name[20];
    float pricePerLiter;
    int availableLiters;
};
void input(PetrolPump *p)
{
	cout<<"Enter Pump Name : ";
	cin.getline(p->name,20);
	cout<<"Enter Price per Liter : ";
	cin>>p->pricePerLiter;
	cout<<"Enter Available liters : ";
	cin>>p->availableLiters;
}
void display(PetrolPump *p)
{
	cout<<endl;
	cout<<endl;
	cout<<"Pump : "<<p->name<<endl;
	cout<<"Price : "<<p->pricePerLiter<<endl;
	cout<<"Stock : "<<p->availableLiters<<endl;
}
int main()
{
	PetrolPump p;
    input(&p);
    display(&p);
}
