//Implementation of Inline Function(general).
#include<conio.h>
#include<iostream>
using namespace std;
//The function is not declared when we use inline function.
//The variables in the function brackets must be same.
//And
//Give the return types as Void if not returning any value.
inline void mul(int p,int q)
{
       int mul;
       mul=p*q;
       cout<<"The Multiplied Result is :"<<mul;
}
inline void div(float r,float s)
{
       float div;
       div=r/s;
       cout<<"The divided Result is  :"<<div;
}

main()
{
      int a,b;
      float c,d;
      cout<<"Enter the two numbers to be Multiplied\n";
      cin>>a>>b;
      mul(a,b);
      cout<<"\nEnter the two numbers to be Divided\n";
      cin>>c>>d;
      div(c,d);
      getch();
}

