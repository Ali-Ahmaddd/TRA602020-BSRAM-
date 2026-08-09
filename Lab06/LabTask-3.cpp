#include<iostream>
#include<fstream>
using namespace std;
struct bank
{
    string name;
    int accno;
    float *dep;
    float balance;
};
int main()
{
    bank a[5];
    ofstream file("details.txt");
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the details of account holder "<<i+1<<endl;
        cout<<"Enter the Name : ";
        cin.ignore();
        getline(cin,a[i].name);
        cout<<"Enter the Account Number : ";
        cin>>a[i].accno;
        a[i].dep=new float[30];
        cout<<"Enter the deposits of 30 days : "<<endl;
        for(int j=0;j<30;j++)
        {
            cout<<"Day "<<j+1<<" : ";
            cin>>a[i].dep[j];
        }
        cout<<"Enter the Current Balance : ";
        cin>>a[i].balance;
        file<<"Name : "<<a[i].name<<endl;
        file<<"Account Number : "<<a[i].accno<<endl;
        file<<"30 Day Deposits : ";
        for(int j=0;j<30;j++)
        {
            file<<a[i].dep[j]<<" ";
        }
        file<<endl;
        file<<"Current Balance : "<<a[i].balance<<endl;
        file<<"--------------------------------"<<endl;
    }
    file.close();
    cout<<"\nAccounts having balance greater than 50000"<<endl;
    cout<<"=========================================="<<endl;
    for(int i=0;i<5;i++)
    {
        if(a[i].balance>50000)
        {
            cout<<"\nName : "<<a[i].name<<endl;
            cout<<"Account Number : "<<a[i].accno<<endl;
            cout<<"Current Balance : "<<a[i].balance<<endl;
        }
    }
    for(int i=0;i<5;i++)
    {
        delete[] a[i].dep;
    }
    return 0;
}
