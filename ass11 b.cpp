//2d transformations
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
class transform{
private:
int tx,ty,A[3][3],i,j,k,a;
float sx,sy,C[3][3],B[3][3];
public:
void display(){
int D[3][3],i,n,j;
for(i=0;i<3;i++)
for(j=0;j<2;j++){
cout<<"Enter vertices of triangle:";
cin>>A[i][j];}
A[0][2]=1;
A[1][2]=1;
A[2][2]=1;
setcolor(YELLOW);
line(320+A[0][0],240-A[0][1],320+A[1][0],240-A[1][1]);
line(320+A[1][0],240-A[1][1],320+A[2][0],240-A[2][1]);
line(320+A[0][0],240-A[0][1],320+A[2][0],240-A[2][1]);


for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<A[i][j]<<" ";}
cout<<"\n";
}
}
void translation(){
cout<<"Enter translation factor tx and ty:";
cin>>tx>>ty;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
B[i][j]=0;}}
B[0][0]=1;
B[1][1]=1;
B[2][2]=1;
B[2][0]=tx;
B[2][1]=ty;
cout<<"Translation matrix:"<<endl;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<B[i][j]<<" ";}
cout<<"\n";}}

void scaling(){
cout<<"Enter scaling factor Sx and Sy:";
cin>>sx>>sy;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
B[i][j]=0;}}
B[0][0]=sx;
B[1][1]=sy;
B[2][2]=1;
cout<<"Scaling matrix:"<<endl;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<B[i][j]<<" ";}
cout<<"\n";}}

void rotation(){
cout<<"Enter angle to rotate:";
cin>>a;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
B[i][j]=0;}}
B[0][0]=cos(a*3.14/180);
B[0][1]=sin(a*3.14/180);
B[1][0]=-sin(a*3.14/180);
B[1][1]=cos(a*3.14/180);
B[2][2]=1;
cout<<"Rotation matrix:"<<endl;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<B[i][j]<<" ";}
cout<<"\n";}
}

void multiply(){
for(i=0;i<3;i++){
for(j=0;j<3;j++){
C[i][j]=0;}}

for(i=0;i<3;i++){
for(j=0;j<3;j++){
for(k=0;k<3;k++){
C[i][j]=C[i][j]+A[i][k]*B[k][j];}}}
cout<<"multiply matrix:"<<endl;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
cout<<C[i][j]<<" ";}
cout<<"\n";}
setcolor(YELLOW);
line(320+C[0][0],240-C[0][1],320+C[1][0],240-C[1][1]);
line(320+C[1][0],240-C[1][1],320+C[2][0],240-C[2][1]);
line(320+C[0][0],240-C[0][1],320+C[2][0],240-C[2][1]);

}
};

int main(){
int gd,gm;
gd=DETECT;
transform t;

initgraph(&gd,&gm,NULL);
line(320,0,320,480);
line(0,240,640,240);
setcolor(YELLOW);
t.display();
cout<<"Enter 1 for translation\n2 for scaling \n3 for rotation:";
int ch;
cin>>ch;
if(ch==1){
t.translation();}
if(ch==2){
t.scaling();}
if(ch==3){
t.rotation();}
t.multiply();
delay(8000);
return 0;
}
