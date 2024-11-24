/*Imagine a publishing company which does marketing for book and audio casette 
create a class publication that stores the title (string) and price(float) from this class derive two classes book which adds page count(int) 
and take tape which adds playtime in minutes(float). WRite a program that instantiates the book and tape class. 
allows user to enter data and display data members if exception is caused replace it.*/

#include<iostream>
using namespace std;
class company
{	public:
	char title[50];
	float price;
	virtual void getdata()=0;
	virtual void display()=0;
};
class book:public virtual company
{	int page_cnt;
	public: 
	void getdata();
	void display();
};
class tape:public virtual company
{	float playtime;
	public: 
	void getdata();
	void display();
};		
void book::getdata()
{
	cout<<"Enter the title of book :";
	cin>>title;
	cout<<"\n Enter priceof book:";
	cin>>price;
	cout<<"\n Enter the number of pages:";
	cin>>page_cnt;
}
void tape ::getdata()
{
	cout<<"Enter the title of tape :";
	cin>>title;
	cout<<"\n Enter price of tape:";
	cin>>price;
	cout<<"\nEnter the playtime:";
	cin>>playtime;
}
void book::display()
{	cout<<title<<"\n"<<price<<"\n"<<page_cnt<<endl;
}

void tape::display()
{	cout<<title<<"\n"<<price<<"\n"<<playtime<<endl;
}

int main()
{	company *p[50];
	int n,i=0;
	cout<<"1.Book\n2.Tape\n3.display\n4.Exit"<<endl;

	do
	{	cout<<"	Enter your choice:";
		cin>>n;
		switch(n)
		{
			case 1:
				p[i]=new book ;
				p[i]->getdata();
				i++;
				break;

			case 2:
				p[i]=new tape;
				p[i]->getdata();
				i++;
				break;

			case 3:
				for(int j=0;j<i;j++)
				{	p[j]->display();
				}
				break;

			case 4:
				break;
		}
	}while(n!=4);
	return 0;
}