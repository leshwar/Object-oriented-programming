//Implementation of Operator Overloading Unary Operator.
#include<conio.h>
#include<iostream>
using namespace std;

class space
{
      int x,y,z;
      public:
      void getdata();
      void display()//Defining display Implicitly.
      {
           cout<<"The Values are:\n";
           cout<<" "<<x<<" "<<y<<" "<<z;
      }
      void operator-();//Invoking the Operator Function.
};
//Defining getdata Function Explictly
void space :: getdata()
{
     cout<<"Enter the Values of x,y,z:\n";
     cin>>x>>y>>z;
}
//Defining the Operator function.
void space :: operator-()
{
     x=-x;
     y=-y;
     z=-z;
}
//Main Function.
int main()
{
    space s;
    s.getdata();
    -s;
    s.display();
    getch();
}
