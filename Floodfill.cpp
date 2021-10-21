#include<iostream>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	int r,c,x=50,y=50,flag=0;
	initgraph(&gd,&gm,"");
	for(r=0;r<8;r++)
	{
		if(flag==0)
		{
			setcolor(YELLOW);
			setfillstyle(SOLID_FILL,BLACK);
			rectangle(x,y,x+50,y+50);
			floodfill(x+1,y+1,YELLOW);
			flag=1;
		}
		else
		{
			setcolor(YELLOW);
			setfillstyle(SOLID_FILL,WHITE);
			rectangle(x,y,x+50,y+50);
			floodfill(x+1,y+1,YELLOW);
			flag=0;
		}
		x=x+50;
	}
	if(flag==0)
	flag=1;
	else
	flag=0;
	delay(120);
	x-50;
	y=50+y;

closegraph();
return 0;
}
