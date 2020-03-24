//Implementation of Operator Overloading Binary Operator for +.
#include<conio.h>
#include<iostream>
using namespace std;

class complex
{
      int real;
      int imag;
      public:
      void getinfo();
      void display();
      complex operator +(complex c);//Invocation of the Operator Function.
};
void complex :: getinfo()
{
     cout<<"Enter the Real and Imaginary Parts of the Complex number :\n";
     cin>>real>>imag;
}
void complex :: display()
{
     cout<<" "<<real<<"+i"<<imag;
}
//Defining the Operator Function.
complex complex :: operator+(complex c)
{
     complex temp;
     temp.real=real+c.real;
     temp.imag=imag+c.imag;
     return (temp);
}
int main()
{
    complex c1,c2,c3;
    c1.getinfo();
    c2.getinfo();
    c1.display();
    c2.display();
    c3= c1+c2;//Calling a Operator Function of two Classes involved in it.
    //Can also use "c3=c1.operator+(c2).
    cout<<"The sum of the Complex Numbers is";
    c3.display();
    getch();
}
