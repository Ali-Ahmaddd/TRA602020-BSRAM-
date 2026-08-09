#include<iostream>
#include<string>
using namespace std;
struct Instructor
{
    string name;
    string department;
};
struct Course
{
    string courseCode;
    string courseName;
    int creditHours;
    int maxSeats;
    int enrolledStudents;
    Instructor instructor;
};
bool enrollStudent(Course &c)
{
    if(c.enrolledStudents<c.maxSeats)
	{
        c.enrolledStudents++;
        return true;
    }
	else
	{
        cout<<"Course Full!"<<endl;
        return false;
    }
}
void displayCourse(Course c)
{
    cout<<"\n=== Course Details ==="<<endl;
    cout<<"Code : "<<c.courseCode<<endl;
    cout<<"Name : "<<c.courseName<<endl;
    cout<<"Credit Hours: "<<c.creditHours<<endl;
    cout<<"Instructor : "<<c.instructor.name<<" ("<<c.instructor.department<<" Department)"<<endl;
    cout<<"Seats : "<<c.enrolledStudents<<" / "<<c.maxSeats<<" ("<<c.maxSeats-c.enrolledStudents<<" remaining)"<<endl;
}
int main()
{
    Course course1;
    course1.courseCode = "CS-301";
    course1.courseName = "Object Oriented Programming";
    course1.creditHours = 3;
    course1.maxSeats = 2;
    course1.enrolledStudents = 0;
    course1.instructor.name = "Miss Eisha Nawaz";
    course1.instructor.department = "CS";
    Course course2;
    course2.courseCode = "CS-302";
    course2.courseName = "Data Structures";
    course2.creditHours = 3;
    course2.maxSeats = 30;
    course2.enrolledStudents = 0;
    course2.instructor.name = "Mr. Ali Hassan";
    course2.instructor.department = "CS";
    for(int i=1;i<=3;i++)
	{
        cout<<"Enrolling student "<<i<<" in OOP... ";
        if(enrollStudent(course1))
        {
            cout<<"Success!"<<endl;
        }
    }
    displayCourse(course1);
    displayCourse(course2);
}
// Q1. What happens if displayCourse() (pass-by-value) modifies enrolledStudents?
// It will NOT change the original Course object in main().
// This is because pass-by-value creates a copy, so any modifications
// are applied only to the copy, not the original data.

// Q2. Why must enrollStudent() use pass-by-reference?
// enrollStudent() must update the actual enrolledStudents value of the Course.
// Pass-by-reference allows direct modification of the original object in main().
// If pass-by-value were used, only a copy would be changed and the real data
// would remain unchanged, making the function useless.

/* Q3. Declaration of an array of 5 Courses in main():
Course courses[5];*/
