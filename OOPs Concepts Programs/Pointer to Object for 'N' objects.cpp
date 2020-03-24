//Implementation of Pointer to Object for a single Object.
#include<conio.h>
#include<iostream>
using namespace std;
#define cnst 10
class example
{
      char name[cnst];
      public:
             void getdata(){cout<<"Enter the Name\n";cin>>name;}
             void display(){cout<<"The Name you Entered is \n"<<name;}
};
const int size=4;
main()
{
      int i;
      for(i=0;i<size;i++)
      {
      example e[i];
      }
      
      for(i=0;i<size;i++)
      {
      e=new example[i];
      }
      
      for(i=0;i<size;i++)
      {
      e[i]->getdata();
      }
      for(i=0;i<size;i++)
      {
      e[i]->display();
      }
      getch();
}
