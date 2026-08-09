#include<iostream>
using namespace std;
class ServoMotor
{
    private:
    int servoID;
    float currentAngle;
    float maxAngle;
    public:
    ServoMotor()
    {
        servoID=0;
        currentAngle=0.0;
        maxAngle=180.0;
        cout<<"[Default Constructor] Servo-0 initialized."<<endl;
    }
    ServoMotor(int id,float angle,float maxAng)
    : servoID(id), currentAngle(angle), maxAngle(maxAng)
    {
        cout<<"[Param Constructor] Servo-"<<servoID<<" initialized at "<<currentAngle<<" deg."<<endl;
    }
    ~ServoMotor()
    {
        cout<<"[Destructor] Servo-"<<servoID<<" powered off."<<endl;
    }
    void rotate(float newAngle)
    {
        if(newAngle>maxAngle)
        {
            currentAngle=maxAngle;
        }
        else if(newAngle<0)
        {
            currentAngle=0;
        }
        else
        {
            currentAngle=newAngle;
        }
        cout<<"Servo-"<<servoID<<" rotated to "<<currentAngle<<" deg."<<endl;
    }
    void display() const
    {
        cout<<"Servo["<<servoID<<"] Angle: "<<currentAngle<<" / Max: "<<maxAngle<<endl;
    }
};
int main()
{
    cout<<"--- Creating servos ---"<<endl;
    ServoMotor s1;
    ServoMotor s2(2,30.0,270.0);
    ServoMotor s3(3,90.0,180.0);
    cout<<"--- Rotating servos ---"<<endl;
    s1.rotate(45.0);
    s2.rotate(300.0);
    s3.rotate(-10.0);
    cout<<"--- Status ---"<<endl;
    s1.display();
    s2.display();
    s3.display();
    cout<<"--- End of main ---"<<endl;
}
