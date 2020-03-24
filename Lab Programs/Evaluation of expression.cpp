#include<conio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    float x,a,b,c,sum;
    cout<<"Enter the value of X";
    cin>>x;
    cout<<"Enter the constants from left to right";
    cin>>a>>b>>c;
    sum=a*pow(x,2)+b*pow(x,1)+c;
    cout<<"The solution of the Equation is  "<<sum;
    getch();
}
