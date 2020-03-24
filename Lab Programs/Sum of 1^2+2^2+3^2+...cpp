#include<stdio.h>
#include<conio.h>
main()
{
      int n,sum=0,i;
      printf(" Enter the no of terms in the series ");
      scanf("%d",&n);
      for(i=0;i<n+1;i++)
      sum=sum+i*i;
      printf(" The summed series is %d ",sum);
      getch();
      }
