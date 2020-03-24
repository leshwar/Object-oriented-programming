//Implementation of Nesting of Member Functions.
#include<conio.h>
#include<iostream>
using namespace std;

class mul
{
      int a,b;//Data members of the class mul.
      public:
      void getdata();/*Member functions of the  class*/
      int multi();     
      void display(); 
};
void mul :: getdata()
{
    cout<<"Enter the values of a,b";
    cin>>a>>b;
}
int mul :: multi()
{
    return(a*b);
}
void mul :: display()
{
    cout<<"The result after multiplication is \n"<<multi();//Member function nested here.
}
int main()
{
    mul m;
    m.getdata();
    m.display();
    getch();
}
    
      
