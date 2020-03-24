#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int m,n,i,j,a[3][3];
      
      cout<<"Enter the number of rows and coloumns of the Matrix";
      cin>>m>>n;
      
      cout<<"Enter the elements row-wise";
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      cin>>a[i][j];
      }
      }
      cout<<"The Transpose Matrix is  :";
      
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      cout<<"\t"<<a[j][i];
      }
      cout<<"\n\t\t\t";
      }
      getch();
      }
