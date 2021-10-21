#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
class pixel
{
public :
	float x,y,x1,y1,r,d;      
	float dp,maxx,maxy,midx,midy;
};
class pixel1:public pixel
{
  public :
     void DDA(float,float,float);
     void bresen(float,float,float);
};
void pixel1::DDA(float x1,float y1,float r)
{

 d=3-2*r;
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
 if(d<0){d=d+4*x+6;}
 else {d=d+4*(x-y)+10;y--;}
 x=x+1;
 }while(x<y);
}

void pixel1::bresen(float x,float y,float r)
{
 maxx=getmaxx();maxy=getmaxy();
 midx=maxx/2;midy=maxy/2;
 line(0,midy,maxx,midy); //x_axis
 line(midx,0,midx,maxy); //y_axis
 x=x+midx;y=midy-y;
 x1=0;y1=r;
 dp=3-2*r;
 do
 {putpixel(x+x1,y+y1,15);
 putpixel(x+x1,y-y1,15);
 putpixel(x-x1,y+y1,15);
 putpixel(x-x1,y-y1,15);

 putpixel(x+y1,y+x1,15);
 putpixel(x-y1,y+x1,15);
 putpixel(x+y1,y-x1,15);
 putpixel(x-y1,y-x1,15);
 if(dp<0){dp=dp+4*x1+6;x1++;}
 else{dp=dp+4*(x1-y1)+10;x1++;y1--;}

 }while(x1<y1);
 getch();
 closegraph();
}

int main()
{
float x,y,x1,y1,r,d;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
pixel1 s;
int ch;
char ans;
do
{
cout<<"\n****MENU***";
cout<<"\n1.DDA Circle";
cout<<"\n2.Bresenhems Circle";
cout<<"\n3.Exit\n";
cin>>ch;
switch(ch)
{
	case 1: cout<<"\n Enter the center x,y and redius r ";
	cin>>x1>>y1>>r;
	x1=x1+320;y1=240-y1;
	s.DDA(x1,y1,r);
	break ;
	case 2: cout<<"\n Enter the center x,y and redius r ";
	cin>>x>>y>>r;
	s.bresen(x,y,r);
	break ;
	case 3: break;
	}// swich complete
	cout<<"\n Do you want to complete...... (y/n)";
	cin>>ans;
	}while(ans=='y'||ans=='Y');
	getch();
	closegraph();
return 0;
}
