#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
int gd=DETECT,gm,l; //l=steps
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
float x1,y1,x2,y2,Dx,Dy,Xinc,Yinc;
cout<<"Enter x1,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
Dx=x2-x1;
Dy=y2-y1;
if(Dx>Dy)
l=Dx;
else
l=Dy;
Xinc=(x2-x1)/l;  //Dx/l
Yinc=(y2-y1)/l;  //Dy/l
for(int i=0;i<l;i++)
{
putpixel(x1,y1,WHITE);
x1=x1+Xinc;
y1=y1+Yinc;
}
getch();
closegraph();
return 0;
}
