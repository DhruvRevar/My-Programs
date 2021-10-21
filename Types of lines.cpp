#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
for(i=0;i<=100;i++)
{
if(int i%2==0)
putpixel(10+i,10+i,15);
}
for(i=0;i<=100;i++)
{
if(i%10<5)
putpixel(100+i,100+i,15);
}
getch();
closegraph();
}