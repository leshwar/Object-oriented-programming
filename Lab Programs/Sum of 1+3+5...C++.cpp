#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int n,sum=0,i;
      cout<<" Enter the last term in the series ";
      cin>>n;
      
      for(i=1;i<n+1;i=i+2)
      sum=sum+i;
      
      cout<<" The summed series is  "<<sum;
      getch();
      }
