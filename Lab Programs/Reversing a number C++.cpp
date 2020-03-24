#include<conio.h>
#include<iostream>
using namespace std;
main()
{
      int n,num,i,num1[10];
      cout<<"Enter the number of digits";
      cin>>n;
      cout<<"Enter the number which is to be reversed";
      cin>>num;
      while(num!=0)
      {
                   for(i=0;i<n;i++)
                   {
                                   num1[i]=num%10;
                                   num=num/10;
                                   }
                                   }
                                   cout<<"The reversed number is : ";
                                   for(i=0;i<n;i++)
                                   cout<<""<<num1[i];
                                   getch();
                                   }
