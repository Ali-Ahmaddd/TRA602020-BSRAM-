#include<iostream>
#include<fstream>
using namespace std;
struct data
{
    int roll;
    string name;
    string sec;
    float gpa;
};
int main()
{
    data a[2];
    ofstream file("student.txt");
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the details of Student "<<i+1<<endl<<endl;
        cout<<"Enter the Roll No : ";
        cin>>a[i].roll;
        cin.ignore();
        cout<<"Enter the Name : ";
        getline(cin,a[i].name);
        cout<<"Enter the Section : ";
        getline(cin,a[i].sec);
        cout<<"Enter the CGPA : ";
        cin>>a[i].gpa;
        cin.ignore();
        cout<<endl;
    }
    for(int i=0;i<2;i++)
    {
        file<<"Student Record "<<i+1<<endl;
        file<<"Roll No : "<<a[i].roll<<endl;
        file<<"Name : "<<a[i].name<<endl;
        file<<"Section : "<<a[i].sec<<endl;
        file<<"CGPA : "<<a[i].gpa<<endl;
        file<<endl;
    }
    file.close();
    ofstream appendFile("student.txt",ios::app);
    appendFile<<"Total students: 2"<<endl;
    appendFile.close();
    ifstream File("student.txt");
    string line;
    while(getline(File,line))
    {
        cout<<line<<endl;
    }
    File.close();
}
