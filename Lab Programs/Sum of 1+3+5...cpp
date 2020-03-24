#include<stdio.h>
#include<conio.h>
main()
{
      int n,sum=0,i;
      printf(" Enter the no of terms in the series ");
      scanf("%d",&n);
      for(i=1;i<n+1;i=i+2)
      sum=sum+i;
      printf(" The summed series is %d ",sum);
      getch();
      }
