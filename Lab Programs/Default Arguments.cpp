#include<conio.h>
#include<iostream>
using namespace std;
float area(int a,int b,float c=0.5);
main()
{
      int a,b;
      cout<<"Enter the Length and breadth of the triangle\n";
      cin>>a>>b;
      area(a,b);
      cout<<"Area of the triangle is \n";
      cout<<" "<<area(a,b);
      getch();
}
float area(int a,int b,float c)
{
      float area;
      return(area=a*b*c);
}
      
