#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
void display(float,float,float,float);
void main(void)
{
int r,fc,nc,i;
int gd=DETECT,gm;
float x,y,x1,y1,x2,y2;
float start_x,start_y,epsilon;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cout<<"\nEnter x,y,r values of circle";
cin>>x>>y>>r;
//calculate epsilon value
i=1;
while(1)
{
fc=pow(2,(i-1));
nc=pow(2,i);
if((fc<=r)&&(r<nc))
break;
i++;
}
cout<<"\n i="<<i;
epsilon=(1/pow(2,i));

start_x=0;
start_y=r;
x1=0;
y1=r;
do
{
float x2=x1+(epsilon*y1);
float y2=y1-(epsilon*x2);

display(x,y,x2,y2);
x1=x2;
y1=y2;
}
while(((y1-start_y)>epsilon) || ((start_x-x1)<epsilon));
getch();
closegraph();
} //main function

void display(float x,float y,float x2,float y2)
{
putpixel(x+x2,y+y2,WHITE);
putpixel(x+x2,y-y2,WHITE);
putpixel(x-x2,y+y2,WHITE);
putpixel(x-x2,y-y2,WHITE);

putpixel(x+x2,y+x2,WHITE);
putpixel(x+x2,y-x2,WHITE);
putpixel(x-y2,y+x2,WHITE);
putpixel(x-y2,y-x2,WHITE);
}