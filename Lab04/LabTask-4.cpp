#include<iostream>
using namespace std;
struct author
{
	string name;
	string nationality;
};
struct book
{
	string title;
	string ISBN;
	double price;
	int PubYear;
	author field;
};
int main()
{
	book data[3];
	cout<<"Enter the data of 3 books :-"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the "<<i+1<<" author's name : ";
		getline(cin,data[i].field.name);
		cout<<"Enter the "<<i+1<<" author's nationality : ";
		getline(cin,data[i].field.nationality);
		cout<<"Enter the "<<i+1<<" book title : ";
		getline(cin,data[i].title);
		cout<<"Enter the "<<i+1<<" ISBN : ";
		getline(cin,data[i].ISBN);
		cout<<"Enter the "<<i+1<<" book price : ";
		cin>>data[i].price;
		cout<<"Enter the "<<i+1<<" book publication year : ";
		cin>>data[i].PubYear;
		cin.ignore();
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		if(data[i].PubYear>2015)
		{
			cout<<"Title: "<<data[i].title;
			cout<<" | Year: "<<data[i].PubYear;
			cout<<" | Author: "<<data[i].field.name<<endl;
		}
	}
	if(data[0].PubYear<=2015&&data[1].PubYear<=2015&&data[2].PubYear<=2015)
	{
		cout<<"There are zero books which is published after 2015!";
	}
}
// Q1. What is the difference between accessing a member of a simple struct vs. a nested struct?
// In a simple struct, members are accessed directly using one dot operator.
// Example: library[i].title
// In a nested struct, we use multiple dot operators to access inner members.
// Example: library[i].author.name

// Q2. Why is it better to store the Author as a nested struct inside Book?
// It improves organization and readability by grouping related data (name and nationality).
// It also makes the program easier to manage and reuse in future.

/* Q3. If you had to add a 'co-author' to the Book struct */

/*struct Book {
    string title;
    string ISBN;
    double price;
    int PubYear;
    author author;
    author coAuthor;
};*/
