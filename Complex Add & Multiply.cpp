#include<iostream>

using namespace std;
class complex
{
 public:
      float real,img;
      complex(){}//default constructor
      complex operator+(complex);
      complex operator*(complex);
      friend ostream &operator<<(ostream &, complex &);
      friend istream &operator>>(istream &, complex &);
};
 complex complex :: operator + (complex obj)
 { 
 	complex temp;
   	temp.real=real+obj.real;
   	temp.img=img+obj.img;
   return(temp);
 }
  complex complex :: operator * (complex obj)
 { 
 	complex temp;
	temp.real=real*obj.real-img*obj.img;
   	temp.img=real*obj.img+img*obj.real;
   return(temp);
 }
istream &operator >>(istream &is,complex &obj)
{
is>>obj.real;
is>>obj.img;
return is;
}
ostream &operator <<(ostream &outt,complex &obj)
{
outt<<" "<<obj.real;
outt<<"+"<<obj.img<<"i";
return outt;
}
int main()
{
 complex a,b,c,d;
 cout<<"\n Enter first complex number";
 cout<<"\n Enter real and imaginary number of complex number";
 cin>>a;
 cout<<"\n Enter second complex number";
 cout<<"\n Enter real and imaginary number of complex number";
 cin>>b;
 c=a+b;
 cout<<"\n\n Addition of complex number=";
 cout<<c;
 d=a*b;
 cout<<"\n\n Multiplication of complex number=";
 cout<<d;
 return 0;
}
