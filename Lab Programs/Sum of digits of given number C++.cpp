#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,sum=0,a;
    cout<<"Enter the number whose sum of digits is to be found out";
    cin>>num;
    
    while(num!=0)
    {
                 a=num%10;
                 sum=sum+a;
                 num=num/10;
                 }
                 cout<<"Sum= "<<sum;
                 getch();
                 }
