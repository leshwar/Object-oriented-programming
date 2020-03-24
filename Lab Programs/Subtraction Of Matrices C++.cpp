#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int m,n,i,j,a[3][3],b[3][3],c[3][3];
      
      cout<<"Enter the number of rows and coloumns of the Matrices";
      cin>>m>>n;
      
      cout<<"Enter the Matrix A elements row-wise";
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      cin>>a[i][j];
      }
      }
      cout<<"Enter the Matrix B elements row-wise";
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      cin>>b[i][j];
      }
      }
      
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      c[i][j]=a[i][j]-b[i][j];
      }
      }
      
      cout<<"The Resultant Matrix is : ";
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      cout<<"\t"<<c[i][j];
      }
      cout<<"\n\t\t\t";
      }
      getch();
      }                
      
