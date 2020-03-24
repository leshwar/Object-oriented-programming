#include<stdio.h>
#include<conio.h>
main()
{
      int p,n,s,a[10],i;
      printf("Enter the number of array elements ");
      scanf("%d",&n);
      printf("Enter the array elements  :");
      for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("Enter the position of the element to be deleted");
      scanf("%d",&p);
      for(i=p-1;i<n-1;i++)
      {
      a[i]=a[i+1];
      }
      printf("Resultant array is ");
      for(i=0;i<n-1;i++)
      printf("%d",a[i]);
      getch();
      }
