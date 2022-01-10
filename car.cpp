#include<dos.h>
#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\Turboc3\\bgi");
for(i=1;i<=640;i++)
{
	line(0,280,640,280);
	line(10+i,200,70+i,200);
	line(70+i,200,110+i,150);
	line(110+i,150,180+i,150);
	line(180+i,150,220+i,200);
	line(220+i,200,280+i,200);
	line(280+i,200,280+i,250);
	line(280+i,250,230+i,250);
	circle(210+i,250,20);
	line(190+i,250,80+i,250);
	circle(60+i,250,20);
	line(40+i,250,10+i,250);
	line(10+i,250,10+i,200);
	line(70+i,200,220+i,200);
	cleardevice();
}
getch();
closegraph();
return 0;
}
