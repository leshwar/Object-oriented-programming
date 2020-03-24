#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int n,a[20],i,sum=0,avg;
      
      cout<<"Enter the number of elements of the Array\n";
      cin>>n;
      cout<<"Enter the Array elements\n";
      for(i=0;i<n;i++)
      cin>>a[i];
      for(i=0;i<n;i++)
      {
      sum=sum+a[i];
      }
      avg=sum/n;
      
      cout<<"The sum of the array elements is "<<sum<<"\nThe average of the array elements is "<<avg;
      for(i=0;i<n;i++)
      cout<<"\nThe Address of each element is "<<&a[i]<<" and contents are "<<a[i];
      getch();
      }
