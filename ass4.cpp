//file handling - Write a C++ program that creates an output file, writes information to it, closes the file,
//open it again as an input file and read the information from the file.
  
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream f1("student.txt");	
				//opening file using constructor in write mode
	char name[30];
	int roll_no;
	char address[50];
	cout<<"\nEnter roll no:";
	cin>>roll_no;
	f1<<roll_no<<endl;			//writing in file
	cout<<"\nEnter name:";
	cin.ignore();
	cin.getline(name,30);
	f1<<name<<endl;
	cout<<"\nEnter address:";
	cin.getline(address,50);
	f1<<address<<endl;
	f1.close();			//closing a file
	
	ifstream f2("student.txt");	
	//f2.open("student.txt");	
					//opening file using function in read mode
	f2>>roll_no;
	f2>>name;
	f2>>address;			//reading from file
	cout<<roll_no<<"\n"<<name<<"\n"<<address<<endl;  
						//display on console unit 
	f2.close();		
	return 0;
}
