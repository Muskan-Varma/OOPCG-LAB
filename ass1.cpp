/*Implement a class complex which represents the complex number data type. Implement the folllowing 
1)CONSTRUCTOR(a default constructor which creates the complex number 0+0i)
2)OVERLOAD OPERATOR + to add two complex numbers 
3)Overload operator * to multiply two complex numbers 
4)OVERLOAD OPERATOR insertion and extraction to print and read complex numbers*/

#include<iostream>
using namespace std;
class complex
{
    private:
    int real;
    int img;

    public:
    //constructor
    complex()
    {   real=0;
        img=0;
    }

    void read(int a,int b)
    {   real=a; 
        img=b;
    }

    void display()
    {   cout<<real<<"+"<<img<<"i"<<endl;
    }

    complex operator+(complex const a)
    {   complex ans;
        ans.real=real+a.real;
        ans.img=img+a.img;
        cout<<"ADDITION:";
        return ans;
    }


    complex operator*(complex const a)
    {   complex mul;
        mul.real=(real*a.real)-(img*a.img);
        mul.img=(real*a.img)+(img*a.real);
        cout<<"MULTIPLICATION:";
        return mul;
    }
};


int main()
{   int x1,y1,x2,y2;
    cout<<"Enter real part of first complex number:";
    cin>>x1;
    cout<<"Enter imaginary part of first complex number:";
    cin>>y1;
    complex c,a,c3,c4;
    cout<<"first complex number:";
    c.read(x1,y1);
    cout<<"\n";
    c.display();
    cout<<"Enter real part of second complex number:";
    cin>>x2;
    cout<<"Enter imaginary part of second complex number:";
    cin>>y2;
    cout<<"second complex number:";
    a.read(x2,y2);
    a.display();
    c3=c+a;
    c3.display();
    c4=c*a;
    c4.display();
    return 0;
}
