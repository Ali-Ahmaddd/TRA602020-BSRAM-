#include<iostream>
using namespace std;
struct Parameters
{
    float length;
    float width;
};
struct Result
{
    float area;
    float perimeter;
};
struct Rectangle
{
    Parameters param;
    Result res;
};
int main()
{
    Rectangle rect;
    cout<<"Enter length: ";
    cin>>rect.param.length;
    cout<<"Enter width: ";
    cin>>rect.param.width;
    rect.res.area=rect.param.length*rect.param.width;
    rect.res.perimeter=2*(rect.param.length+rect.param.width);
    cout<<"\n--- Rectangle Details ---"<<endl;
    cout<<"Length: "<<rect.param.length<<endl;
    cout<<"Width: "<<rect.param.width<<endl;
    cout<<"Area: "<<rect.res.area<<endl;
    cout<<"Perimeter: "<<rect.res.perimeter<<endl;
}
