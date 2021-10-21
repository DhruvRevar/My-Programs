#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void ddaline(float,float,float,float);
void bcircle(float,float,float);
void display(float,float,float,float);
int main()
{
int gd=DETECT,gm;
float x1,y1,x2,y2,x,y,r;
float maxx,maxy,midx,midy;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;
ddaline(0,midy,maxx,midy);
ddaline(midx,0,midx,maxy);
cout<<"enter the values x,y and r for circle";
cin>>x>>y>>r;
x=midx+x;
y=midy-y;
bcircle(x,y,r);
bcircle(x,y,(r/2));
ddaline(x+(r*0.87),y+(r*0.5),x,y-r);
ddaline(x,y-r,x-(r*(0.87)),y+(r*0.5));
ddaline(x+(r*0.87),y+(r*0.5),x-(r*0.87),y+(r*0.5));
ddaline(x-(r*0.87),y-(r*0.5),x,y+r);
ddaline(x,y+r,x+(r*(0.87)),y-(r*0.5));
ddaline(x-(r*0.87),y-(r*0.5),x+(r*0.87),y-(r*0.5));
circle(x,y,(r/2));
getch();
closegraph();
return 0;
}
void ddaline(float x1,float y1,float x2, float y2)
{
float dx,dy,l,i,xinc,yinc;
dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx>dy) l=dx;
else l=dy;
xinc=(x2-x1)/l;
yinc=(y2-y1)/l;
for(i=0;i<=l;i++)
{putpixel(x1,y1,15);
x1=x1+xinc;
y1=y1+yinc;
}}
void bcircle(float x1,float y1,float r)
{
float dp;
dp=3-2*r;
float x=0; float y=r;
do {display(x,y,x1,y1);
if(dp<0)
{x++;dp=dp+4*x+6;}
else
{dp=dp+4*(x-y)+10;x++;y--;}
}while(x<=y);
}
void display(float x,float y,float x1,float y1)
{
putpixel(x1+x,y1+y,5);
putpixel(x1-x,y1+y,15);
putpixel(x1+x,y1-y,15);
putpixel(x1-x,y1-y,15);

putpixel(x1+y,y1+x,5);
putpixel(x1-y,y1+x,15);
putpixel(x1+y,y1-x,15);
putpixel(x1-y,y1-x,15);

}
