#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;
int main()
{
  int gd=DETECT,gm;
  int i,j;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  for(i=1;i<=640;i++)
  {
    //cleardevice();
    line(0,285,640,285);
   // line(20+i,280,237+i,280);//bottom horizontal
    line(20+i,280,0+i,200);//left incline
    line(237+i,280,257+i,200);//right incline
    line(0+i,200,257+i,200);//top horizontal
    line(160+i,200,200+i,125);//left triangular line
    line(227+i,200,200+i,125);//Right triangular line
    delay(10);
  }
  getch();
  closegraph();
  return 0;
}
