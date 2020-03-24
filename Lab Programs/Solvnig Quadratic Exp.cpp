#include<math.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{
      float x,a,b,c,sum;
      cout<<"Enter the value of X :\t ";
      cin>>x;
      cout<<"Enter the constants from left to right\n ";
      cin>>a>>b>>c;
      sum=a*pow(x,2)+b*pow(x,1)+c;
      
      cout<<"The solution of the general equation is "<<sum;
      getch();
}
