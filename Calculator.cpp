#include<iostream>
#include<conio.h>
using namespace std;
int main()
{ 
  char c,ans;
  float n1,n2;
  do
  {
  cout<<"\nEnter first number";
  cin>>n1;
  cout<<"\nEnter second number";
  cin>>n2;
  cout<<"\nEnter the operation to be perform\n +\t -\t *\t /\t";
  cin>>c;
  switch(c)
  { case '+':cout<<"Answer="<<n1+n2<<"\n";break;
    case '-':cout<<"Answer="<<n1-n2<<"\n";break;
    case '*':cout<<"Answer="<<n1*n2<<"\n";break;
    case '/':cout<<"Answer="<<n1/n2<<"\n";break;
    default : cout<<"\n Enter valid choice like +,-,*,/";
  }
  cout<<"\nDo you want to calculate again?";
  cin>>ans;
  }
  while(ans=='y'||ans=='Y');
  return 0;
}
