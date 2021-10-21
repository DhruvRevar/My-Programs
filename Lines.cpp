#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
int i,j,n;
for(i=0;i<100;i++)
putpixel(10+i,10,15);
for(i=0;i<100;i++)
if(i%2==0)
putpixel(10+i,20,15);
for(i=0;i<100;i++)
if(i%10<5)
putpixel(10+i,30,15);
for(i=0;i<150;i++)
if(i%10<5 || i%10==7)
putpixel(10+i,40,15);
cout<<"Enter the thickness for the line";
cin>>n;
for(i=0;i<200;i++)
for(j=0;j<n;j++)
putpixel(10+i,80-j,1);
rectangle(200,200,300,300);
setcolor(15);
setfillstyle(1,2);
pieslice(200,200,45,90,100);
getch();
closegraph();
return 0;
}
