#include<iostream>
#include<fstream>
using namespace std;
struct readings
{
    int id;
    float temp;
    float dist;
    string TStamp;
};
int main()
{
    readings a[3];
    ofstream file("sensor_log.txt");
    for(int i=0;i<3;i++)
    {
        cout<<"Enter details for Sensor "<<i+1<<endl;
        cout<<"Enter the Sensor ID : ";
        cin>>a[i].id;
        cout<<"Enter the Temperature : ";
        cin>>a[i].temp;
        cout<<"Enter the Distance in CM : ";
        cin>>a[i].dist;
        cout<<"Enter the Time Stamp : ";
        cin.ignore();
        getline(cin,a[i].TStamp);
        cout<<endl;
        file<<"Sensor ID : "<<a[i].id<<endl;
        file<<"Temperature : "<<a[i].temp<<endl;
        file<<"Distance (CM) : "<<a[i].dist<<endl;
        file<<"Time Stamp : "<<a[i].TStamp<<endl;
        file<<endl;
    }
    file.close();
    ifstream File("sensor_log.txt");
    string line;
    cout<<"Reading File Contents : "<<endl;
    cout<<endl;
    while(getline(File,line))
    {
        cout<<line<<endl;
    }
    File.close();
}
