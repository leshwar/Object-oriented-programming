#include<stdio.h>
#include<conio.h>
main()
{
      int n,a[25],i,num,flag=0,pos;
      printf("Enter the number of elements in the array ");
      scanf("%d",&n);
      printf("Enter the array elements ");
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      }
      printf("Enter the number to be found");
      scanf("%d",&num);
       for(i=0;i<n;i++)
       if(num==a[i])
       {
                    flag=1;
                    pos=i;
                    }
                    if(flag==1)
                    printf("The number %d is present in the array and its position is %d",num,pos);
                    else if(flag==0)
                    printf(" Tme number is not present n the array");
                    getch();
                    }     
