#include <iostream>
using namespace std;

template <class T>
class sort
{	public:
	T a[100],temp;
	int n;
	void read();
	void display();
	void selectionsort();
};

template <class T>
void sort<T> :: read()
{	cout<<"How many elements do you want to enter ?\n";
	cin>>n;
	cout<<"Enter elements of array\n";
	for(int i=0;i<n;i++)
	{	cin>>a[i];
	}
	cout<<"\n";
}

template <class T>
void sort<T> :: display()
{	int i;
	for(i=0;i<n;i++)
	{	cout<<a[i]<<"\t";
	}
}

template <class T>
void sort<T> :: selectionsort()
{	int i,j,min;
	for(i=0;i<n;i++)
	{	min=i;
		for(j=i+1;j<n;j++)
		{	if(a[j]<a[min])
			min=j;
		}
		if(min!=i)
		{	temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

int main()
{	int ch;
	do{
		int p,i;
		sort <int> a1;
		sort <float> b1;
		sort <char> c1;
	 	sort <string> c2[30];
		cout<<"\nWhat do you want to sort ?\n 1. Integer Array \n 2. Float Array\n 3. Character Array\n 4. Character String\n. 5. Exit"<<endl;
		cout<<"\nEnter Choice :";
		cin>>ch;
	
		if(ch==1)
		{	cout<<"\n INTEGER ARRAY :" <<endl;
			a1.read();
			cout<<" Array is :"<<endl;
			a1.display();
			a1.selectionsort();
			cout<<"\n Sorted array is: "<<endl;
			a1.display();
		}
		else if(ch==2)
		{	cout<<"\n FLOAT ARRAY :" <<endl;
			b1.read();
			cout<<" Array is :"<<endl;
			b1.display();
			b1.selectionsort();
			cout<<"\n Sorted array is: "<<endl;
			b1.display();
		}
		else if(ch==3)
		{	cout<<"\n CHARACTER ARRAY :" <<endl;
			c1.read();
			cout<<" Array is :"<<endl;
			c1.display();
			c1.selectionsort();
			cout<<"\n Sorted array is: "<<endl;
			c1.display();
		}
		else if(ch==4)
		{	cout<<"\n CHARACTER STRING :"<<endl;
			cout<<"\n Enter the length of the string :"<<endl;
			cin>>p;
			c2[i].read();
			c2[i].display();
			cout<<"\n Sorted array is :"<<endl;
			for(i=0;i<p;i++)
			{	c2[i].selectionsort();
				c2[i].display();
			}
		}
		else{ break;}
	}while(ch!=5);
	return 0;
}

