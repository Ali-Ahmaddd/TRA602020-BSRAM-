#include<iostream>
using namespace std;
struct Patient
{
    int patientID;
    char name[30];
    float temperature;
    int severity;
};
Patient* mostCritical(Patient arr[],int n)
{
	int a=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i].severity>arr[a].severity)
        {
            a=i;
        }
    }
    return &arr[a];
}
Patient* findByID(Patient arr[],int n,int id)
{
	for(int i=0;i<n;i++)
	{
		if(id==arr[i].patientID)
		{
			return &arr[i];
		}
	}
	return NULL;
}
void displayPatient(Patient *p)
{
	cout<<"ID : "<<p->patientID<<endl;
    cout<<"Name : "<<p->name<<endl;
    cout<<"Temp : "<<p->temperature<<" C"<<endl;
    cout<<"Severity : "<<p->severity<<"/10"<<endl;
}
void inputPatient(Patient *p,int index)
{
	cout<<"\nPatient "<<index+1<<":"<<endl;
    cout<<"ID: ";
    cin>>p->patientID;
    cin.ignore();
    cout<<"Name: ";
    cin.getline(p->name,30);
    cout<<"Temp: ";
    cin>>p->temperature;
    cout<<"Severity: ";
    cin>>p->severity;
}
int main()
{
	int n;
    cout<<"=== Lahore General Hospital - Emergency Triage ==="<<endl;
    cout<<"Enter number of patients: ";
    cin>>n;
    Patient patients[50];
    for(int i=0; i<n; i++)
    {
        inputPatient(&patients[i],i);
    }
    cout<<"\n--- Most Critical Patient ---"<<endl;
    Patient *MC=mostCritical(patients,n);
    cout<<"ALERT: Immediate Attention Required!"<<endl;
    displayPatient(MC);
    char cont='y';
    while(cont=='y'||cont=='Y')
    {
        int updateID;
        cout<<"\nEnter Patient ID to update (0 to stop): ";
        cin>>updateID;
        if(updateID==0)
        {
            break;
        }
        Patient *ptr=findByID(patients,n,updateID);
        if(ptr!=NULL)
        {
            cout<<"Enter new temperature: ";
            cin>>ptr->temperature;
            cout<<"Enter new severity : ";
            cin>>ptr->severity;
            cout<<"\n--- Updated Record ---"<<endl;
            displayPatient(ptr);
            cout<<"\n--- New Most Critical Patient ---"<<endl;
            Patient *newCritical = mostCritical(patients, n);
            cout<<"?? ALERT: Immediate Attention Required!"<<endl;
            displayPatient(newCritical);
        }
        else
        {
            cout<<"? Patient not found!"<<endl;
        }
        cout<<"Update another patient? (y/n): ";
        cin>>cont;
    }
    cout<<"\n=== Final Triage Summary ==="<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"ID: "<<patients[i].patientID
            <<" | Name: "<<patients[i].name
            <<" | Temp: "<<patients[i].temperature<<" C"
            <<" | Severity: "<<patients[i].severity
            <<endl;
    }
}
