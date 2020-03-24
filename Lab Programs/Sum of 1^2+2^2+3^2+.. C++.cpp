#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
      int n,sum=0,i;
      cout<<" Enter the no of terms in the series ";
      cin>>n;
      
      for(i=0;i<n+1;i++)
      sum=sum+i*i;
      
      cout<<" The summed series is %d "<<sum;
      getch();
      }
