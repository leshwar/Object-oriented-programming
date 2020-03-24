#include<stdio.h>
#include<conio.h>
long factorial(int);
main()
{
      int num;
      long f;
      printf("Enter a number to find factorial ");
      scanf("%d",&num);
      f=factorial(num);
      printf("%d!=%d ",num,f);
      getch();
}
      long factorial(int n)
      {
           if(n==0)
           return 1;
           else
           return(n*factorial(n-1));
      }
