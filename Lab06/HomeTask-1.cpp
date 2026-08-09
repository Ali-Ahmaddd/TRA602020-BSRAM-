#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
struct path
{
    int id;
    float x;
    float y;
    float z;
    string time;
};
int main()
{
    path a[10];
    ofstream file("path_log.csv");
    file<<"Waypoint_ID,X,Y,Z,Timestamp"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"\nEnter details of Waypoint "<<i+1<<endl;
        cout<<"Enter Waypoint ID : ";
        cin>>a[i].id;
        cout<<"Enter X coordinate : ";
        cin>>a[i].x;
        cout<<"Enter Y coordinate : ";
        cin>>a[i].y;
        cout<<"Enter Z coordinate : ";
        cin>>a[i].z;
        cout<<"Enter Timestamp : ";
        cin.ignore();
        getline(cin,a[i].time);
        file<<a[i].id<<","<<a[i].x<<","<<a[i].y<<","<<a[i].z<<","<<a[i].time<<endl;
    }
    float totalDistance = 0;
    for(int i=1;i<10;i++)
    {
        float distance = sqrt((a[i].x-a[i-1].x)*(a[i].x-a[i-1].x)+(a[i].y-a[i-1].y)*(a[i].y-a[i-1].y)+(a[i].z-a[i-1].z)*(a[i].z-a[i-1].z));
        totalDistance+=distance;
    }
    float averageSpeed=totalDistance/10;
    file<<"\nSummary"<<endl;
    file<<"Total Distance = "<<totalDistance<<endl;
    file<<"Average Speed = "<<averageSpeed<<endl;
    file.close();
    cout<<"\nWaypoints outside safe zone (x > 100)\n";
    for(int i=0;i<10;i++)
    {
        if(a[i].x>100)
        {
            cout<<"Waypoint "<<a[i].id<<" is outside safe zone."<<endl;
        }
    }
    cout<<"\nTotal Distance Travelled : "<<totalDistance<<endl;
    cout<<"Average Speed : "<<averageSpeed<<endl;
    ifstream readFile("path_log.csv");
    string line;
    cout<<"\nContents of File\n"<<endl;
    while(getline(readFile,line))
    {
        cout<<line<<endl;
    }
    readFile.close();
}
