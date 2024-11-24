#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;
class dda
{
//private:
float x1,y1,x2,y2;
public:

/*int round(float n)
{
if(n-(int n)<0.5)
return n;
else return (int)(n+1);
}*/
void Line(float x1,float y1,float x2,float y2);
};
void dda::Line(float x1,float y1,float x2,float y2)
{
	float x,y;
	float Dx=x2-x1;
	float Dy=y2-y1;
	int step;
	if(abs(Dx)>abs(Dy))
	{ 	
		step=Dx;
	}
	else
	{ 
		step=Dy;
	}

	float x_inc= Dx/step;
	float y_inc= Dy/step;

	x=x1;
	y=y1;
	putpixel(floor(x),floor(y),WHITE);
	for (int i=1;i<=step;i++)
	{
		putpixel(floor(x),floor(y),WHITE);
//cout<<floor(x)<<" "<<floor(y)<<endl;
		x=x+x_inc;
		y=y+y_inc;
	}
}

int main()
{int gd,gm;
gd=DETECT;
initgraph(&gd,&gm,NULL);
int x1,y1,x2,y2;
/*cout<<"Enter coordinates as x1,y1,x2,y2"<<endl;
cin>>x1>>y1>>x2>>y2;
dda l;
l.Line(x1,y1,x2,y2);*/
dda l,l1,l2,l3,l4,l5,l6,l7;

l.Line(120,140,120,340);
l1.Line(120,140,520,140);
l2.Line(520,140,520,340);
l3.Line(120,340,520,340);
l4.Line(120,240,320,140);
l5.Line(320,140,520,240);
l6.Line(320,340,520,240);
l7.Line(120,240,320,340);
delay(100000);
closegraph();
return 0;
}
