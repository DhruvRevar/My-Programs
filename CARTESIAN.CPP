#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
int xmax=getmaxx();//640
int ymax=getmaxy();//480
int xmid=xmax/2;//320
int ymid=ymax/2;//240
line (0,ymid,xmax,ymid);//x-axis
line (xmid,0,xmid,ymax);//y-axis
cout<<"Enter line co-ordinate x1,y1,x2,y2";
cin>>x1>>y1>>x2>>y2;
//line(x1,y1,x2,y2);
line(x1+xmid,ymid-y1,x2+xmid,ymid-y2);
getch();
closegraph();
return 0;
}
