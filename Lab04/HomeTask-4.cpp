#include<iostream>
#include<string>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};
struct Doctor
{
    string name;
    string specialization;
};
struct Patient
{
    string patientID;
    string name;
    int age;
    Date admissionDate;
    Doctor assignedDoctor;
    double dailyCharge;
};
double calculateBill(Patient p,int days)
{
    return p.dailyCharge*days;
}
void displayPatientReport(Patient p,int days)
{
    cout<<"======= HOSPITAL BILL ======="<<endl;
    cout<<"Patient ID : "<<p.patientID<<endl;
    cout<<"Name : "<<p.name<<endl;
    cout<<"Age : "<<p.age<<endl;
    cout<<"Admission : "<<p.admissionDate.day<<" / "<<p.admissionDate.month<<" / "<<p.admissionDate.year<<endl;
    cout<<"Doctor : "<<p.assignedDoctor.name<<endl;
    cout<<"Specialization: "<<p.assignedDoctor.specialization<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Days Admitted: "<<days<<endl;
    cout<<"Daily Charge : Rs. "<<p.dailyCharge<<endl;
    cout<<"TOTAL BILL : Rs. "<<calculateBill(p,days)<<endl;
    cout<<"============================="<<endl<<endl;
}
int main()
{
    Patient p1;
    p1.patientID="HOS-2024-001";
    p1.name="Hamza Iqbal";
    p1.age=45;
    p1.admissionDate.day=10;
    p1.admissionDate.month=3;
    p1.admissionDate.year=2024;
    p1.assignedDoctor.name="Dr. Asim Raza";
    p1.assignedDoctor.specialization="Cardiology";
    p1.dailyCharge=3500;
    Patient p2;
    p2.patientID="HOS-2024-002";
    p2.name="Fatima Zahra";
    p2.age=30;
    p2.admissionDate.day=15;
    p2.admissionDate.month=3;
    p2.admissionDate.year=2024;
    p2.assignedDoctor.name="Dr. Nadia Khan";
    p2.assignedDoctor.specialization="Orthopedics";
    p2.dailyCharge=2800;
    displayPatientReport(p1,5);
    displayPatientReport(p2,3);
}
// Q1. How to access doctor's specialization from Patient p?
// p.assignedDoctor.specialization

// Q2. If calculateBill() used pass-by-reference instead of pass-by-value:
// Yes, it would still work correctly because the function only reads data
// and does not modify the Patient object.
// Practical difference: pass-by-reference avoids making a copy (more efficient),
// while pass-by-value creates a copy (safer but slightly less efficient).

/* Q3. Modified Patient struct with admission history (array of 5 Date)
struct Patient {
    string patientID;
    string name;
    int age;
    Date admissionHistory[5]; // array of 5 dates
    Doctor assignedDoctor;
    double dailyCharge;
};*/
