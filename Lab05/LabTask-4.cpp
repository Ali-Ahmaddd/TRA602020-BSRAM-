#include<iostream>
using namespace std;
struct Bill
{
    int accountNo;
    char ownerName[30];
    int unitsConsumed;
    float ratePerUnit;
    float totalBill;
};
void inputBill(Bill *b)
{
	cout<<"Enter Account No : ";
	cin>>b->accountNo;
	cin.ignore();
	cout<<"Enter Owner Name : ";
	cin.getline(b->ownerName,30);
	cout<<"Units Consumed : ";
	cin>>b->unitsConsumed;
	cout<<"Rate Per Unit (Rs) : ";
	cin>>b->ratePerUnit;
}
void calculateBill(Bill *b)
{
	float base=b->unitsConsumed*b->ratePerUnit;
    float surcharge=0;
    if(b->unitsConsumed>300)
	{
        surcharge=base*0.15;
    }
    b->totalBill=base+surcharge;
    cout<<endl;
	cout<<endl;
	cout<<"Account Number : "<<b->accountNo<<endl;
	cout<<"Owner Name : "<<b->ownerName<<endl;
	cout<<"Units Used : "<<b->unitsConsumed<<endl;
	cout<<"Rate/Unit : Rs."<<b->ratePerUnit<<endl;
	cout<<"Base Amount : Rs."<<base<<endl;
	cout<<"Surcharge 15% : Rs."<<surcharge<<endl;
}
void displayBill(Bill *b)
{
	cout<<"Total Bill : Rs."<<b->totalBill;
}
int main()
{
	Bill b;
	cout<<"=== LESCO Billing System ==="<<endl;
	inputBill(&b);
    calculateBill(&b);
    displayBill(&b);
}
