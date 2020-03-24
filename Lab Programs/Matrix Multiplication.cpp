#include<stdio.h>
#include<conio.h>
main()
{
      int i,j,k,a[20][20],b[20][20],c[20][20],m,n,p,q;
      printf(" Enter the number of rows and coloumns of matrix a ");
      scanf("%d%d",&m,&n);
      printf(" Enter the matrix elements for a ");
        
      for(i=0;i<m;i++)
      {
      for(j=0;j<n;j++)
      {
      scanf("%d",&a[i][j]);
      }
      }
      printf(" Enter the number of rows and coloumns of matrix b ");
      scanf("%d%d",&p,&q);
      printf(" Enter the matrix elements for b ");
      for(i=0;i<p;i++)
      {
      for(j=0;j<q;j++)
      {
      scanf("%d",&b[i][j]);
      }
      }
      for(i=0;i<m;i++)
      {
      for(j=0;j<q;j++)
      {
                      c[i][j]=0;
                      }
                      }
      for(i=0;i<m;i++)
      {
      for(j=0;j<q;j++)
      {
      for(k=0;k<n;k++)
      {
      c[i][j]+=a[i][k]*b[k][j];
      }
      }
      }      
      for(i=0;i<m;i++)
      {
      for(j=0;j<q;j++)
      {
      printf("\t%d\t ",c[i][j]);
      }
      
      printf("\n");
      }
      getch();
      }
