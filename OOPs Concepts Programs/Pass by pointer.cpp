//Program to Implement Pass by Pointer.
#include<conio.h>
#include<stdio.h>
int swapr(int *x,int *y);
main() 
{ 
int i, j;  

printf("Please Enter the First Number in A : "); 
scanf("%d",&i); 

printf("\nPlease Enter the Second Number in B : "); 
scanf("%d",&j); 

swapr(&i,&j); /* call by address*/ 

printf("A is now in B : %d",i); 
printf("B is now in A : %d",j);
getch(); 
} 
/* call by pointer function*/ 
int swapr(int *x,int *y) 
{ 
int t; 
t=*x; 
*x=*y; 
*y=t; 
}
