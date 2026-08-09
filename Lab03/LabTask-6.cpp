#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
struct Volume
{
    Distance length;
    Distance width;
    Distance height;
};
int main()
{
    Volume room;
    room.length.feet=12;
    room.length.inches=6;
    room.width.feet=10;
    room.width.inches=3;
    room.height.feet=8;
    room.height.inches=0;
    float length=room.length.feet+room.length.inches/12;
    float width=room.width.feet+room.width.inches/12;
    float height=room.height.feet+room.height.inches/12;
    float volume=length*width*height;
    cout<<"Volume of room = "<<volume<<" cubic feet"<<endl;
}
