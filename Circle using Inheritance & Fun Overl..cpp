#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
class A
 { 
	public:
		int x,y,x1,y1,r,d;
 };
 class B:public A
 {
	public: 
		void getdata();
		void draw();
 };
 void B::getdata()
 {
	cout<<"\n Enter the center x1,y1 and readius r  for the circle";
	cin>>x1>>y1>>r;
    x1=x1+320;
	y1=240-y1;
 }
void B::draw()
{
   d=3-2*r;//d is decision parameter
   x=0;y=r;
   line(320,0,320,480);
   line(0,240,640,240);
   do
   {
	   putpixel(x1+x,y1+y,15);
	   putpixel(x1-x,y1+y,15);
	   putpixel(x1+x,y1-y,15);
	   putpixel(x1-x,y1-y,15);
	   putpixel(x1+y,y1+x,15);
	   putpixel(x1-y,y1+x,15);
	   putpixel(x1+y,y1-x,15);
	   putpixel(x1-y,y1-x,15);
	if(d<0) 
	{
		d=d+4*x+6;
	}
	else 
	{
		d=d+4*(x-y)+10;
		y--;
	}
	x=x+1;
	}
	while(x<y);
}
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	A obj;
	B obj1;
	obj1.getdata();
	obj1.draw();
	getch();
	closegraph();
	return 0;
}
