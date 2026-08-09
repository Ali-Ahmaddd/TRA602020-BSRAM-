#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
struct robot
{
    int id;
    float temp[5];
    int battery[5];
};
void merge()
{
    ifstream file1("robot1_log.txt");
    ifstream file2("robot2_log.txt");
    ifstream file3("robot3_log.txt");

    ofstream file("fleet_log.txt");

    string line;

    while(getline(file1,line))
    {
        file<<line<<endl;
    }

    while(getline(file2,line))
    {
        file<<line<<endl;
    }

    while(getline(file3,line))
    {
        file<<line<<endl;
    }

    file1.close();
    file2.close();
    file3.close();
    file.close();
}
int main()
{
    robot a[3];
    for(int i=0;i<3;i++)
    {
        a[i].id=i+1;
        cout<<"\nEnter data for Robot "<<a[i].id<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<"Temperature "<<j+1<<" : ";
            cin>>a[i].temp[j];
            cout<<"Battery % "<<j+1<<" : ";
            cin>>a[i].battery[j];
        }
        if(i==0)
        {
            ofstream file("robot1_log.txt");
            file<<"Robot ID : "<<a[i].id<<endl;
            for(int j=0;j<5;j++)
            {
                file<<"Temperature : "<<a[i].temp[j]<<endl;
                file<<"Battery : "<<a[i].battery[j];
                if(a[i].battery[j]<20)
                {
                    file<<"  CRITICAL";
                }
                file<<endl;
            }
            file.close();
        }
        if(i==1)
        {
            ofstream file("robot2_log.txt");
            file<<"Robot ID : "<<a[i].id<<endl;
            for(int j=0;j<5;j++)
            {
                file<<"Temperature : "<<a[i].temp[j]<<endl;
                file<<"Battery : "<<a[i].battery[j];
                if(a[i].battery[j]<20)
                {
                    file<<"  CRITICAL";
                }
                file<<endl;
            }
            file.close();
        }
        if(i==2)
        {
            ofstream file("robot3_log.txt");
            file<<"Robot ID : "<<a[i].id<<endl;
            for(int j=0;j<5;j++)
            {
                file<<"Temperature : "<<a[i].temp[j]<<endl;
                file<<"Battery : "<<a[i].battery[j];
                if(a[i].battery[j]<20)
                {
                    file<<"  CRITICAL";
                }
                file<<endl;
            }
            file.close();
        }
    }
    merge();
    remove("robot1_log.txt");
    remove("robot2_log.txt");
    remove("robot3_log.txt");
    cout<<"\nLogs merged into fleet_log.txt"<<endl;
    cout<<"Individual log files deleted."<<endl;
}
