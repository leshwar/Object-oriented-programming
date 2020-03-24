#include<conio.h>
#include<iostream>
using namespace std;
main()
{
      int j=0,r,temp,n,a[10],i,b[10];
      cout<<"Enter the number array elements :\n ";
      cin>>n;
      cout<<"Enter the array elements :\n ";
      for(i=0;i<n;i++)
      cin>>a[i];
      for(i=0;i<n;i++)
      {
      for(j=0;j<n;j++)
      {
      if(a[i]<a[j])
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      }}}  
      
      j=0;
      for(i=0;i<n;i++)
      {
                      if(a[i]!=a[i+1])
                      {
                      b[j]=a[i];
                      j++;
                      }
      }
      for(r=0;r<j;r++)
      cout<<" "<<b[r];
      
      getch();
}
