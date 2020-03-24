//Program to Implement Pass by Reference.
#include<conio.h>
#include<iostream> 
using namespace std;
void swap(int &Num1,int &Num2); //The Declaration function takes &.
int main() 
{ 
int Var1,Var2; 
cout<<"Enter two numbers "; 
cin>>Var1; 
cin>>Var2; 
swap(Var1,Var2); 
getch();
} 

void swap(int &Num1,int &Num2)//The call function takes &.
{ 
int Temp; 
Temp = Num1; 
Num1 = Num2; 
Num2 = Temp; 
cout<<"In swap "<<Num1<<" "<<Num2; 
} 
