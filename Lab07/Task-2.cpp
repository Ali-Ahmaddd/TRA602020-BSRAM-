#include<iostream>
#include<string>
using namespace std;
class Sensor
{
public:
    string sensorId;
    string sensorType;
    float reading;
    bool isActive;
};
int main()
{
    Sensor s1,s2,s3;
    s1.sensorId="S-01";
    s1.sensorType="Ultrasonic";
    s1.reading=25.4;
    s1.isActive=true;
    s2.sensorId="S-02";
    s2.sensorType="Infrared";
    s2.reading=10.1;
    s2.isActive=false;
    s3.sensorId="S-03";
    s3.sensorType="Camera";
    s3.reading=0.0;
    s3.isActive=true;
    cout<<"--- Sensor Status Report ---"<<endl;
    cout<<boolalpha;
    cout<<"ID: "<<s1.sensorId<<" | Type: "<<s1.sensorType<<" | Reading: "<<s1.reading<<" | Active: "<<s1.isActive<<endl;
    cout<<"ID: "<<s2.sensorId<<" | Type: "<<s2.sensorType<<"   | Reading: "<<s2.reading<<" | Active: "<<s2.isActive<<endl;
    cout<<"ID: "<<s3.sensorId<<" | Type: "<<s3.sensorType<<"     | Reading: "<<s3.reading<<"    | Active: "<<s3.isActive<<endl;
}
