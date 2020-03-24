#include<stdio.h>
#include<conio.h>
main()
{
      char n;
      int a,b,s;
printf(" Enter requirment A-Addition\n S-Subtraction\n M-Multiplication\n D-Division ");
scanf("%c",&n);
printf(" Enter the two numbers to be %c",n);
scanf("%d%d",&a,&b);
switch(n)
{
case 'A':
     s=a+b;
     break;
case 'S':
     s=a-b;
      break;
case 'M':
     s=a*b;
      break;
case 'D':
     s=a/b;
      break;
     }
     printf(" The final result is %d ",s);
     getch();
     }   
