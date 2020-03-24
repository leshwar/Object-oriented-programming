//Implementation of Function Overloading.
#include<conio.h>
#include<iostream>
using namespace std;
int volume(int a);
float volume(int r,int h);
float volume(int l,int b,int h);
int main()
{
    int a,r,h,l,b;
    cout<<"Enter the Side of the Cube\n";
    cin>>a;
    volume(a);
    cout<<"Enter the radius and height of the cylinder\n";
    cin>>r>>h;
    volume(r,h);
    cout<<"Enter the length,breadth and height of the rectangular box\n";
    cin>>l>>b>>h;
    volume(l,b,h);
    getch();
}
int volume(int a)
{
    cout<<"Volume of the Cube is\n"<<a*a*a;
}
float volume(int r,int h)
{
    cout<<"Volume of the Cylinder is\n"<<3.14*r*r*h;
}
float volume(int l,int b,int h)
{
    cout<<"Volume of the Rectangle is\n"<<l*b*h;
}
