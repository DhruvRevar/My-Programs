#include<iostream>
#include<graphics.h>
#include<math.h>
#include<conio.h>
using namespace std;
int sign(int);
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	float x,y,x1,y1,x2,y2,dx,dy;
       int temp,exchange_flag=0;
	cout<<"\nEnter co-ordinates of line(x1,y1,x2,y2)";
       cin>>x1>>y1>>x2>>y2;
       x1=x1+320;y1=240-y1;
       x2=x2+320;y2=240-y2;
	dx=abs(x2-x1); //absolute function
	dy=abs(y2-y1);
	int s1,s2;
	s1=sign(x2-x1);
	s2=sign(y2-y1);
	x=x1;
	y=y1;
	if(dy>dx)
	{temp=dx;dx=dy;dy=temp;exchange_flag=1;}
	else
	exchange_flag=0;
       int p=2*dy-dx;
	line(0,240,640,240);
	line(320,0,320,480);
	int i=0;
	while(i<=dx)
	{
	 putpixel(abs(x),abs(y),15);
	 if(p>=0)
	 {  if(exchange_flag==1)
	      x=x+s1;
	    else
	      y=y+s2;
	    p=p-2*dx;
	    }
	    if(exchange_flag==1)
	    y=y+s2;
	    else
	    x=x+s1;
	    p=p+2*dy;
	    i++;
	  }

	getch();
	closegraph();
}
int sign(int i)
{
if (i>0)
return 1;
else
return -1;
if(i==0)
return 0;
}
