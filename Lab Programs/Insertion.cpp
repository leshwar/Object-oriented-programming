#include<stdio.h>
#include<conio.h>
main()
{
      int i,a[20],n,q,p,r,j,b[20];
      printf("Enter the number of elements of the array ");
      scanf("%d",&n);
      printf("Enter the array elements : ");
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      }
      printf("Select Insertion 1.Top\n2.bottom\n3.Random ");
      scanf("%d",&q);
      switch(q)
      {
      case 1:
      j=1;
      printf("Enter the element of the array to be inserted ");
      scanf("%d",&r);
      for(i=0;i<n;i++)
      {       
      b[j]=a[i];
      b[0]=r;
      j++;
      }
      for(j=0;j<n+1;j++)
      printf("%d",b[j]);
      break;

      case 2:
      j=0;
      printf("Enter the element of the array to be inserted ");
      scanf("%d",&r);
      for(i=0;i<n;i++)
      {       
      b[j]=a[i];
      b[n]=r;
      j++;
      }
      for(j=0;j<n+1;j++)
      printf("%d",b[j]);
      break;
      
      case 3:
      j=0;
      printf("Enter the element and its position to be inserted int the array ");
      scanf("%d%d",&r,&p);
      for(i=0;i<=p;i++)
      {       
      b[j]=a[i];
      b[p-1]=r;
      j++;
      }
      for(i=p+1;i<n+1;i++)
      {
      b[j]=a[i];
      j++;
      }
      for(j=0;j<n+1;j++)
      printf("%d",b[j]);
      break;
      }
      getch();
      }                       
