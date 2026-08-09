#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
    string name;
    string address;
public:
    Person(string n,string addr):name(n),address(addr){}
    void showPerson()
	{
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
    }
};
class Employee:public Person
{
protected:
    int empID;
public:
    Employee(string n,string addr,int id):Person(n,addr),empID(id){}
    void showEmployee()
	{
        showPerson();
        cout<<"Employee ID : "<<empID<<endl;
    }
};
class Manager:public Employee
{
private:
    string qualification;
public:
    Manager(string n,string addr,int id,string qual):Employee(n,addr,id),qualification(qual){}
    void showManager()
	{
        showEmployee();
        cout<<"Qualification : "<<qualification<<endl;
    }
};
int main()
{
    Manager mgr("Sara Ahmed","Lahore",1042,"MBA");
    cout<<"===== Manager Profile ====="<<endl;
    mgr.showManager();
    cout<<endl;
    Manager mgr2("Usman Ali","Karachi",2075,"PhD Computer Science");
    cout<<"===== Manager Profile ====="<<endl;
    mgr2.showManager();
    return 0;
}
