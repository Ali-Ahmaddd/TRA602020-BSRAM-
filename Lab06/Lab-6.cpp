#include <iostream>
#include <fstream>
using namespace std;
struct SensorReading
{
    int sensorID;
    float temperature;
    float humidity;
    string timestamp;
};
int main()
{
    SensorReading reading[3];
    reading[0].sensorID=1;
    reading[0].temperature=36.5;
    reading[0].humidity=72.3;
    reading[0].timestamp="2024-01-15 08:00";
    reading[1].sensorID=2;
    reading[1].temperature=38.1;
    reading[1].humidity=68.9;
    reading[1].timestamp="2024-01-15 08:05";
    reading[2].sensorID=3;
    reading[2].temperature=35.7;
    reading[2].humidity=75.1;
    reading[2].timestamp="2024-01-15 08:10";
    ofstream file("sensor_log.txt");
    for(int i=0;i<3;i++)
    {
        file<<"---Sensor Reading"<<i+1<<"---"<<endl;
        file<<"Sensor ID : "<<reading[i].sensorID<<endl;
        file<<"Temperature : "<<reading[i].temperature<<"C"<<endl;
        file<<"Humidity : "<<reading[i].humidity<<"%"<<endl;
        file<<"Timestamp : "<<reading[i].timestamp<<endl;
    }
    file.close();
    cout<<"File \"sensor_log.txt\" created successfully.";
    ifstream File("sensor_log.txt");
    string line;
    cout<<"\nReading file contents:"<<endl;
    while(getline(File,line))
    {
        cout<<line<<endl;
    }
    File.close();
}
