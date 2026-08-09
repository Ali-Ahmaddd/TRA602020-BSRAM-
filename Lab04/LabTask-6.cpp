#include<iostream>
using namespace std;
struct Account
{
	string accountNumber;
	string holderName;
	double balance;
};
Account createAccount()
{
    Account acc;
    cout<<"=== Create New Account ==="<<endl;
    cout<<"Enter account number: ";
    cin>>acc.accountNumber;
    cin.ignore();
    cout<<"Enter account holder name: ";
    getline(cin,acc.holderName);
    cout<<"Enter initial balance: ";
    cin>>acc.balance;
    return acc;
}
void deposit(Account &acc,double amount)
{
    acc.balance+=amount;
    cout<<"\n=== Deposit Receipt ==="<<endl;
    cout<<"Account : "<<acc.accountNumber<<endl;
    cout<<"Holder  : "<<acc.holderName<<endl;
    cout<<"Deposited: Rs. "<<amount<<endl;
    cout<<"Balance  : Rs. "<<acc.balance<<endl;
}
bool withdraw(Account &acc,double amount)
{
    if(acc.balance>=amount)
	{
        acc.balance-=amount;
        cout<<"\nWithdrawal successful!"<<endl;
        cout<<"Balance after withdrawal: Rs. "<<acc.balance<<endl;
        return true;
    }
    else
	{
        cout<<"\nInsufficient funds!"<<endl;
        cout<<"Required: Rs. " <<amount<<" | Available: Rs. " << acc.balance << endl;
        return false;
    }
}
int main()
{
	Account myacc=createAccount();
	deposit(myacc ,5000);
	withdraw(myacc ,5000);
}
// Q1. What does it mean for a function to 'return a struct'?
// It means the function creates and returns a complete struct object as its result.
// In this task, createAccount() returns an Account object filled with user input.
// This is different from display/calculate functions in Lab Task 5, which either
// modify an existing struct (pass-by-reference) or just display data without returning anything.

// Q2. In the withdraw() function, why is bool a better return type than void?
// bool allows the function to indicate success (true) or failure (false).
// This helps the calling code (main) decide what message to display or what action to take.
// If it were void, we wouldn't know whether the withdrawal succeeded or failed.

// Q3. If Account had a nested struct (e.g., BranchInfo), how to access branch name in deposit()?
// Example access expression:
// acc.branch.branchName
