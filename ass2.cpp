#include<iostream>
#include<string.h>
//#include<bits/stdc++.h>
#define max_len 30
#define address_len 50
using namespace std;
class student
{	public:
	int roll_no;
	char name[max_len];
	char cls[5];
	char div[3];
	char dob[10];
	char blood_group[5];
	char address[address_len];
	unsigned long int contact_no;
	unsigned long int telephone_no;
	char drive_lic_no[20];
	static int count;
	void getdata();
	void display();
	friend void display(student &obj);
	student() //constructor
	{	roll_no=0;
		//cout<<"constructor"<<endl;
		roll_no=count;
		count++;
	}
	~student() //destructor
	{	//cout<<"Destructor"<<endl;
		cout<<"\n";
		count++;
	}
	static void getcount() //this is my static member function
	{	cout<<"\ncount"<<count;
	}
	//this is my parametrized constructor
	student(int roll_no)
	{	this->roll_no=roll_no;
	}
	//this is my copy constructor
	student(student & obj)
	{
		roll_no=obj.roll_no;
		strcpy(name,obj.name);
		strcpy(cls,obj.cls);
		strcpy(div,obj.div);
		strcpy(dob,obj.dob);
		strcpy(blood_group,obj.blood_group);
		contact_no=obj.contact_no;
		telephone_no=obj.telephone_no;
		strcpy(drive_lic_no,obj.drive_lic_no);
		count++;
	}
}; 
//static variable  default declaration
int student::count=0;

void student::getdata()
{
	cout<<"\nEnter rollno:";
		cin>>roll_no;
	cout<<"\nEnter name:";
		cin>>name;
	cout<<"\nEnter class:";
		cin>>cls;
	cout<<"\nEnter div:";
		cin>>div;
	cout<<"\nEnter date of birth:";
		cin>>dob;
	cout<<"\nEnter blood group:";
		cin>>blood_group;
	cout<<"\nEnter address:";
		cin>>address;
	cout<<"\nEnter contact_no:";
		cin>>contact_no;
	cout<<"\nEnter telephone no:";
		cin>>telephone_no;
	cout<<"\nEnter driving license no:";
		cin>>drive_lic_no;
	cout<<"\nData Inserted..!!";
}
void display(student & obj)
{
	cout<<"\n"<<obj.roll_no;
	cout<<"\t"<<obj.name;
	cout<<"\t"<<obj.cls;
	cout<<"\t\t"<<obj.div;
//	cout<<"\nDivision:"<<div;
	cout<<"\t\t"<<obj.dob;
	cout<<"\t\t"<<obj.blood_group;
	cout<<"\t"<<obj.address;
	cout<<"\t"<<obj.contact_no;
	cout<<"\t"<<obj.telephone_no;
	cout<<"\t"<<obj.drive_lic_no;
}	
int main()
{	/*student s1;
	student s2(s1);
	cout<<"\nEnter data for first student"<<endl;
	s1.getdata();
	cout<<"details";
	cout<<"\nRollno\tNAME\tCLASS\tDIVISION\tDOB\tBLOODGROUP\tADDRESS\tCONTACT_NO\tPHONENO\tDRIVING LIC NO\n";
	display(s1);*/
	student *s[50];
	int i,n;
	cout<<"\nHow many students"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{	s[i]= new student();
	}
	for(i=0;i<n;i++)
	{	s[i]->getdata();
	}
	cout<<"\nRollno\tNAME\tCLASS\tDIVISION\tDOB\tBLOODGROUP\tADDRESS\tCONTACT_NO\tPHONENO\tDRIVING LIC NO\n";
	for(i=0;i<n;i++)
	{	display(*s[i]);
	}
	for(i=0;i<n;i++)
	{	delete(s[i]);
	}
	return 0;
}
