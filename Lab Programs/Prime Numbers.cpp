#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
      int i,j,flag;
      printf("The Prime numbers between 1 to 100");
      for(i=1;i<=100;i++)
      if(i==1 || i==2 || i==3)
      printf("%d\n",i);
      else
      {
      flag=0;
      for(j=2;j<=sqrt(i);j++)
      {
		       if((i%j)==0)
		       flag=1;
		       }
			   if(flag==0)
			    printf("%d\n",i);
			       }
				       getch();
				       }
