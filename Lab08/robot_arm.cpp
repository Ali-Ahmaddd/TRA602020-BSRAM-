#include<iostream>
using namespace std;
class RobotArm
{
    private:
    string armName;
    int numJoints;
    string *jointNames;
    float *jointAngles;
    float maxReach;
    public:
    RobotArm()
    {
        armName="DefaultArm";
        numJoints=3;
        maxReach=50.0;
        jointNames=new string[numJoints];
        jointAngles=new float[numJoints];
        jointNames[0]="J1";
        jointNames[1]="J2";
        jointNames[2]="J3";
        for(int i=0;i<numJoints;i++)
        {
            jointAngles[i]=0;
        }
        cout<<"[Default Constructor] "<<armName<<" created. Joints: "<<numJoints<<endl;
    }
    RobotArm(string name,int joints,string names[],float reach)
    : armName(name), numJoints(joints), maxReach(reach)
    {
        jointNames=new string[numJoints];
        jointAngles=new float[numJoints];
        for(int i=0;i<numJoints;i++)
        {
            jointNames[i]=names[i];
            jointAngles[i]=0;
        }
        cout<<"[Param Constructor] "<<armName<<" created. Joints: "<<numJoints<<endl;
    }
    RobotArm(const RobotArm &other)
    {
        armName=other.armName+"_copy";
        numJoints=other.numJoints;
        maxReach=other.maxReach;
        jointNames=new string[numJoints];
        jointAngles=new float[numJoints];
        for(int i=0;i<numJoints;i++)
        {
            jointNames[i]=other.jointNames[i];
            jointAngles[i]=other.jointAngles[i];
        }
        cout<<"[Copy Constructor] "<<armName<<" cloned. Joints: "<<numJoints<<endl;
    }
    ~RobotArm()
    {
        delete[] jointNames;
        delete[] jointAngles;
        cout<<"[Destructor] "<<armName<<" shut down. Memory freed."<<endl;
    }
    void setAngle(int jointIndex,float angle)
    {
        if(jointIndex>=0 && jointIndex<numJoints)
        {
            if(angle<0)
            {
                angle=0;
            }
            else if(angle>180)
            {
                angle=180;
            }
            jointAngles[jointIndex]=angle;
            cout<<jointNames[jointIndex]<<" set to "<<jointAngles[jointIndex]<<" deg."<<endl;
        }
    }
    void displayArm() const
    {
        cout<<"Arm: "<<armName<<" | Max Reach: "<<maxReach<<" cm"<<endl;
        for(int i=0;i<numJoints;i++)
        {
            cout<<"Joint["<<i<<"] "<<jointNames[i]<<" : "<<jointAngles[i]<<" deg"<<endl;
        }
    }
    float totalAngle() const
    {
        float total=0;
        for(int i=0;i<numJoints;i++)
        {
            total=total+jointAngles[i];
        }
        return total;
    }
};
int main()
{
    RobotArm arm1;
    string joints[]={"Shoulder","Elbow","Wrist","Gripper"};
    RobotArm arm2("Arm-Delta",4,joints,120.0);
    arm2.setAngle(0,45);
    arm2.setAngle(1,90);
    arm2.setAngle(2,30);
    arm2.setAngle(3,0);
    RobotArm arm3(arm2);
    cout<<"\n--- Arm-Delta Status ---"<<endl;
    arm2.displayArm();
    cout<<"Total angle: "<<arm2.totalAngle()<<" deg"<<endl;
    cout<<"\n--- Arm-Delta_copy Status ---"<<endl;
    arm3.displayArm();
    cout<<"Total angle: "<<arm3.totalAngle()<<" deg"<<endl;
    cout<<"\n--- Testing Deep Copy ---"<<endl;
    arm3.setAngle(2,100);
    cout<<"\nOriginal:"<<endl;
    arm2.displayArm();
    cout<<"\nCopy:"<<endl;
    arm3.displayArm();
}
