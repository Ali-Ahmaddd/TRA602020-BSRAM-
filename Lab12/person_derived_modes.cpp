#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person(string n,int a):name(n),age(a){}
    void setName(string n)
	{
        name=n;
    }
    void setAge(int a)
	{
        age=a;
    }
    string getName()
	{
        return name;
    }
    int getAge()
	{
        return age;
    }
    void showPerson()
	{
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class Student:public Person
{
private:
    int rollNumber;
public:
    Student(string n,int a,int roll):Person(n,a),rollNumber(roll){}
    void showStudent()
	{
        showPerson();
        cout<<"Roll No : "<<rollNumber<<endl;
    }
};
class Employee:protected Person
{
private:
    int empID;
public:
    Employee(string n,int a,int id):Person(n,a),empID(id){}
    void showEmployee()
	{
        showPerson();
        cout<<"Emp ID : "<<empID<<endl;
    }
    string getEmployeeName()
	{
        return getName();
    }
};
class Teacher:private Person
{
private:
    string subject;
public:
    Teacher(string n,int a,string sub):Person(n,a),subject(sub){}
    void showTeacher()
	{
        showPerson();
        cout<<"Subject : "<<subject<<endl;
    }
};
int main()
{
    Student stu("Zara Khan",20,1045);
    cout<<"===== Student ====="<<endl;
    stu.showStudent();
    cout<<"Direct call ok: "<<stu.getName()<<endl;
    cout<<endl;
    Employee emp("Ahmed Ali",35,2088);
    cout<<"===== Employee ====="<<endl;
    emp.showEmployee();
    cout<<"// emp.getName() --> ERROR: getName() is protected in Employee"<<endl;
    cout<<endl;
    Teacher tchr("Dr. Nadia",42,"Robotics");
    cout<<"===== Teacher ====="<<endl;
    tchr.showTeacher();
    cout<<"// tchr.showPerson() --> ERROR: showPerson() is private in Teacher"<<endl;
    return 0;
}
