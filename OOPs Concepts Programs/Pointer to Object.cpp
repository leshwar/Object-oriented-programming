//Implementation of Pointer to Object for a single Object.
#include<conio.h>
#include<iostream>
using namespace std;
#define size 10
class example
{
      char name[size];
      public:
             void getdata(){cout<<"Enter the Name\n";cin>>name;}
             void display(){cout<<"The Name you Entered is "<<endl;cout<<" "<<name;}
};
main()
{
      example *e=new example;
      e->getdata();
      e->display();
      getch();
}
