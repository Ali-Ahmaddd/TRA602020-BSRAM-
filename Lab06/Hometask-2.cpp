#include<iostream>
#include<fstream>
using namespace std;
struct layer
{
    int neurons;
    float weights[10];
    float bias;
};
int main()
{
    layer *a;
    a=new layer[3];
    a[0].neurons=4;
    a[0].bias=0.5;
    for(int i=0;i<10;i++)
    {
        a[0].weights[i]=i+1;
    }
    a[1].neurons=6;
    a[1].bias=1.5;
    for(int i=0;i<10;i++)
    {
        a[1].weights[i]=i+11;
    }
    a[2].neurons=2;
    a[2].bias=2.5;
    for(int i=0;i<10;i++)
    {
        a[2].weights[i]=i+21;
    }
    ofstream file("model_weights.bin",ios::binary);
    file.write((char*)a,sizeof(layer)*3);
    file.close();
    layer b[3];
    ifstream readFile("model_weights.bin",ios::binary);
    readFile.read((char*)b,sizeof(layer)*3);
    readFile.close();
    cout<<"Neural Network Data"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"\nLayer "<<i+1<<endl;
        cout<<"Neurons : "<<b[i].neurons<<endl;
        cout<<"Weights : ";
        for(int j=0;j<10;j++)
        {
            cout<<b[i].weights[j]<<" ";
        }
        cout<<endl;
        cout<<"Bias : "<<b[i].bias<<endl;
    }
    delete[] a;
}
