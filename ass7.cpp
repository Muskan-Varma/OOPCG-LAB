/*Write a program in C++ to use map associative container. The keys will be the names of states and the values will be the populations of the states.
When the program runs, the user is prompted to type the name of a state. The program then looks in the map, 
using the state name as an index and returns the population of the state*/

#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;
int main()
{
	map<string,int>Map;
	string search, name;
	int number, n;

	cout<<"\n How many states population you want to enter?";
	cin>>n; 

	cout<<"Enter the name of state and population \n";
	for(int i=0;i<n;i++)
	{	cin>>name>>number;
		Map[name]=number;
	}
	Map.insert(pair<string, int>("Maharashtra", 114200000));
	map<string,int>::iterator iter;
	cout<<"Population of state\n";
	cout<<"\n Size of population Map:"<<Map.size()<<"\n";
	
	for(iter=Map.begin(); iter!=Map.end(); iter++)
	{	cout<<iter->first<<":"<<iter->second<<"\n";
	}
	
	cout<<"\n Enter name of the state to search :";
	cin>>search;

	iter = Map.find(search);
	
	if( iter!= Map.end() )
    		cout<<search<<" 's population is "<<iter->second ;
	else
		cout<<"Key is not populationMap"<<"\n";
	
	Map.clear();
}