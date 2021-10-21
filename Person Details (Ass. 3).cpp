#include<iostream>
#include<string.h>   
#include<ctime>  
using namespace std;
 class person
{
 
 private:
  char *name,*blood,*address; 
  int dob;
  long int insurance,tel,license;
  float height,weight;
  static int count;       
 public:
 person() 
{
 count++;
 cout<<"-----------------default information------------";
 name=new char[13]; 
 strcpy(name,"default name");
 blood=new char[3];
 strcpy(blood,"O+");
 address=new char[20];
 strcpy(address,"Nasik");
 insurance=542451;
 tel=+45876112;
 license=19122013;
 height=5.5;
 weight=100;
 dob=1998;
 display();

}
 person(char n[],char b[],int yy,char add[],float w,
 long int in,long int tn,long int ln,float h)  
{
                                               
 count++;
  int len;
 len=strlen(n);
 name=new char[len+1];
 strcpy(name,n);

 len=strlen(b);
 blood=new char[len+1];
 strcpy(blood,b);

 len=strlen(add);
 address=new char[len+1];
 strcpy(address,add);
 dob=yy;
 insurance=in;
 tel=tn;
 license=ln;
 height=h;
 weight=w;
}
  void display();     
  
static int displaycount()  
{
 cout<<"\n NUMBER OF ENTRIES ARE:"<<count<<endl;
}

 ~person()         
{
 cout<<"\n destructor called...";
}
};
 
  int person::count=0;
  void person::display()  
{
 cout<<"\n PERSON NAME:"<<name;
 cout<<"\n BLOOD GROUP:"<<blood;
 cout<<"\n DATE OF BIRTH:"<<dob;
 cout<<"\n CONTACT ADDRESS:"<<address;
 cout<<"\n INSURANCE NUMBER:"<<insurance;
 cout<<"\n TELEPHONE NUMBER:"<<tel;
 cout<<"\n LICENSE NUMBER:"<<license;
 cout<<"\n HEIGHT:"<<height;
 cout<<"\n WEIGHT:"<<weight<<endl;
}
int main()
{
  int ch;
 person *p[20],*temp;
 
  char pname[15],pblood[5],paddress[20];
  long int pinsurance,ptel,plicense;
  float pheight,pweight;
  int cnt=0,dd;
 do
{
 cout<<"\n --------MENU--------"<<endl;
 cout<<"\n 1.DEFAULT CONSTRUCTER ";
 cout<<"\n 2.PARAMETERIZED CONSTRUCTOR"; 
 cout<<"\n 3.NUMBER OF ENTRIES";
 cout<<"\n 4.DISPLAY";
        cout<<"\n 5.EXIT";
 cout<<"\n ENTER THE CHOICE:";
 cin>>ch;
 switch(ch)
{
 case 1: 
 p[cnt]=new person();
 
 cnt=cnt+1;
 break;
 case 2:  
 cout<<"\n ENTER THE PERSON NAME:";
 cin>>pname;
 cout<<"\n ENTER THE PERSON BLOOD GROUP:";
 cin>>pblood;
 cout<<"\n ENTER DATE OF BIRTH:";
 cin>>dd;
 cout<<"\n ENTER THE PERSON CONTACT ADDRESS:";
 cin>>paddress;
 cout<<"\n ENTER THE PERSON INSURANCE NUMBER:";
 cin>>pinsurance;
 cout<<"\n ENTER THE PERSON TELEPHONE NUMBER:";
 cin>>ptel;
 cout<<"\n ENTER THE PERSON LICENSE NUMBER:";
 cin>>plicense;
 cout<<"\n ENTER THE PERSON HEIGHT:";
 cin>>pheight;
 cout<<"\n ENTER THE PERSON WEIGHT:";
 cin>>pweight;
 p[cnt]=new person(pname,pblood,dd,paddress,pinsurance,ptel,plicense,pheight,pweight);
 
 cnt=cnt+1;
 break;
 case 3:  
 person::displaycount();
 break;
 case 4: 
 for(int i=0;i<cnt;i++)
{
 p[i]->display();
 }
 break; 
 case 5: 
          return 0;
}
} while(ch!=4);
return 0;
}


