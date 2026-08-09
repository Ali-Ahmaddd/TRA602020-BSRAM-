#include<iostream>
#include<string>
using namespace std;
class Animal
{
protected:
    string name;
    string species;
public:
    Animal(string n,string s)
	{
        name=n;
        species=s;
    }
    void sound()
	{
        cout<<"Sound: Some generic animal sound"<<endl;
    }
    void describe()
	{
        cout<<"Name: "<<name<<" | Species: "<<species<<endl;
    }
};
class Cat:public Animal
{
private:
    string breed;
public:
    Cat(string n,string s,string b):Animal(n,s)
	{
        breed=b;
    }
    void sound()
	{
        cout<<"Sound: Meow! Meow!"<<endl;
    }
    void describe()
	{
        Animal::describe();
        cout<<"Breed: "<<breed<<endl;
    }
};
class Dog:public Animal
{
private:
    string breed;
public:
    Dog(string n,string s,string b):Animal(n,s)
	{
        breed=b;
    }
    void sound()
	{
        cout<<"Sound: Woof! Woof!"<<endl;
    }
    void describe()
	{
        Animal::describe();
        cout<<"Breed: "<<breed<<endl;
    }
};
class GuardDog : public Dog
{
private:
    int trainingLevel;
public:
    GuardDog(string n,string s,string b,int level)
        : Dog(n,s,b)
		{
        trainingLevel=level;
    }
    void sound()
	{
        cout<<"Sound: WOOF! WOOF! STAY BACK!"<<endl;
    }
    void describe()
	{
        Dog::describe();
        cout<<"Training Level: "<<trainingLevel<<endl;
    }
};

int main()
{
    Cat cat("Whiskers","Feline","Persian");
    Dog dog("Bruno","Canine","German Shepherd");
    GuardDog guard("Rex","Canine","Rottweiler",5);
    cout<<"=== Cat ==="<<endl;
    cat.describe();
    cat.sound();
    cout << endl;
    cout<<"=== Dog ==="<<endl;
    dog.describe();
    dog.sound();
    cout<<endl;
    cout<<"=== Guard Dog ==="<<endl;
    guard.describe();
    guard.sound();
    cout<<endl;
    cout<<"Base Dog sound via scope resolution: ";
    guard.Dog::sound();
    return 0;
}
