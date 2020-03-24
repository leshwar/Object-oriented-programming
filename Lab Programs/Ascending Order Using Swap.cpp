#include<iostream>
using namespace std;
#include<conio.h>
main()
{
      int a[25],i,j,n,min,temp;
      cout<<" Enter the number of elements in the array:";
      cin>>n;
      cout<<"Enter the array elements";
      for(i=0;i<n;i++)
      {
      cin>>a[i];      
      }
      for(i=0;i<n;i++)
      {
      for(j=0;j<n;j++)
      {
      if(a[i]<a[j])
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      }
      }
      }
      for(i=0;i<n;i++)
      cout<<" "<<a[i];
      getch();
}
      
       
