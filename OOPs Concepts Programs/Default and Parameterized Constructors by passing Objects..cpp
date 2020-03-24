//Implementation of Default Constructor and Parameterized Constructor.
#include<conio.h>
#include<iostream>
using namespace std;

class complex
{
      int real,img;
      public:
             complex() {real=0;img=0;}
             complex(int a,int b) {real=a;img=b;}
             void sum(complex c1 ,complex c2);
             void display();
};
void complex:: sum(complex c1,complex c2)
{
     complex c3;
     real=c1.real+c2.real;
     img=c1.img+c2.img;
}
void complex:: display()
{
    cout<<"The real and imaginary values are\n"<<real<<" "<<img;
}
main()
{
      complex c1(100,0);
      complex c2(0,150);
      complex c3;
      c3.sum(c1,c2);
      c3.display();
      getch();
}
      
