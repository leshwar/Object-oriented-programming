#include<stdio.h>
#include<conio.h>
main()
{
      int num,a[50],i,n;
      printf(" Enter the number of digits of the number ");
      scanf("%d",&n);
      printf(" Enter the number to be reversed ");
      scanf("%d",&num);
      while(num!=0)
      {
      for(i=0;i<n;i++)
      {
      a[i]=num%10;
      num=num/10;
      }
      }
      printf(" The reverse order is: ");
      for(i=0;i<n;i++)
      {
                      printf("%d",a[i]);
                      }
                      getch();
                      }
