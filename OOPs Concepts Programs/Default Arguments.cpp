//Implementation of Default Arguments.
#include<conio.h>
#include<iostream>
using namespace std;
float area(int a,int b,float c=0.5);
main()
{
      int a,b;
      cout<<"Enter the Height and Base of the triangle\t";
      cin>>a>>b;
      cout<<"The Area of the Triangle is :"<< area(a,b);
      getch();
}
float area(int a,int b,float c)
{
      return(a*b*c);
}
