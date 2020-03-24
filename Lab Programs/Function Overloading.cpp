float area(float a,float c,float q);//Area of Triangle.
float area(float e);//Area of Square.
float area(float o,float p);//Area of Rectangle.
float perimeter(float v,float n,float t);//Perimeter of Triangle.
float perimeter(float f,float g);//Perimeter of Rectangle.
float perimeter(float i);//Perimeter of Square.
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
      float h,b,l,w,s,x,y,z;
      cout<<"\nEnter the Height,base and other side of the Triangle\t";
      cin>>h>>b>>x;
      area(h,b,x);
      perimeter(h,b,x);
      
      cout<<"\nEnter the Length and Width of the Rectangle\t";
      cin>>l>>w;
      area(l,w);
      perimeter(l,w);
      
      cout<<"\nEnter the side of Square\t";
      cin>>s;
      area(s);
      perimeter(s);
      
      getch();
}//area of trinagle
float area(float a,float c,float q)
{
      float area1;
      area1=0.5*a*c;
      cout<<"\nThe area of the triangle is \t"<<area1;
}//perimeter of triangle
float perimeter(float v,float n,float t)
{
      float per1;
      per1=(v+n+t)/2;
      cout<<"\nThe perimeter of Triangle is \t"<<per1;
}//Area of Rectangle.
float area(float o,float p)
{
      float area3;
      area3=o*p;
      cout<<"\nArea of the Rectangle is \t"<<area3;
}//perimeter of Rectangle.
float perimeter(float f,float g)
{
      float per2;
      per2=2*(f+g);
      cout<<"\nPerimeter of rectangle is \t"<<per2;
}//Area of Square
float area(float e)
{
      float area2;
      area2=e*e;
      cout<<"\nThe area of the square is \t"<<area2;
}//Perimeter of Square
float perimeter(float i)
{
      float per3;
      per3=4*i;
      cout<<"\nThe perimeter of the square is \t"<<per3;
}
