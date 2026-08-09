#include<iostream>
using namespace std;
struct student
{
	string name;
	int roll;
	float marks[3];
	float gpa;
};
void calculateGPA(student &a)
{
	float sum=a.marks[0]+a.marks[1]+a.marks[2];
	a.gpa=(sum/3.0)/10.0;
	if(a.gpa>4.0)
	{
		a.gpa=4.0;
	}
}
void displayStudent(student a)
{
	cout<<"\nStudent Details:"<<endl;
    cout<<"Name : "<<a.name<<endl;
    cout<<"Roll No : "<<a.roll<<endl;
    cout<<"Marks : ";
    for(int i=0;i<3;i++)
	{
        cout<<a.marks[i]<<" ";
    }
    cout<<endl;
    cout<<"GPA : "<<a.gpa<<" / 4.0"<<endl;
}
int main()
{
	student a[2];
	cout<<"Enter the data of 2 students :-"<<endl;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter the name : ";
		cin.ignore();
		getline(cin,a[i].name);
		cout<<"Enter roll number : ";
		cin>>a[i].roll;
		cout<<"Enter the marks of first subject : ";
		cin>>a[i].marks[0];
		cout<<"Enter the marks of second subject : ";
		cin>>a[i].marks[1];
		cout<<"Enter the marks of third subject : ";
		cin>>a[i].marks[2];
		calculateGPA(a[i]);
		displayStudent(a[i]);
	}
}
// Q1. What is the key difference between passing a struct by value vs. by reference?
// Pass by value creates a copy of the struct, so changes do not affect the original.
// Pass by reference uses the original variable, so changes affect the actual data in main.
// calculateGPA() must use pass-by-reference because it needs to update the gpa field
// inside the original Student object stored in main().

// Q2. If displayStudent() modifies a.gpa inside the function (pass-by-value), will it affect main()?
// No, it will not affect the original struct in main().
// This is because pass-by-value sends a copy of the struct to the function,
// so any changes are made only on the copied version, not the original one.

// Q3. Can a function return a struct in C++?
// Yes, a function in C++ can return a struct.

/* Rewrite calculateGPA() signature to return float instead of modifying struct:
float calculateGPA(Student a);*/
