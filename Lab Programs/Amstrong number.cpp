#include<stdio.h>
#include<conio.h>
main()
{
      int num,rem,sum=0,temp;
      printf("Enter the number to be checked for Amstrong ");
      scanf("%d",&num);
      temp=num;
      while(num!=0)
      {
      rem=num%10;
      sum=sum+(rem*rem*rem);
      num=num/10;
      }
      if(sum==temp)
      printf("The given number is Amstrong number");
      else
      printf("No,the given number is not an Amstrong number");
      getch();
      }
