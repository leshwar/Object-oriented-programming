//Implementation of Inline Function in Class.
#include<iostream>
#include<conio.h>
using namespace std;
class oper
{
int a,b,add,sub,mul;
float div;
public:
void get()//Implicit call of Inline function.
{
cout<<"Enter A value:";
cin>>a;
cout<<"Enter B value:";
cin>>b;
}
void sum();
void difference();
void product();
void division();
};

inline void oper :: sum()//Explicit call of Inline function.
{
add=a+b;
cout<<"\n Addition of two numbers:"<<add;
}

inline void oper :: difference()
{
sub=a-b;
cout<<"\n Differnce of two numbers:"<<sub;
}

inline void oper :: product()
{
mul=a*b;
cout<<"\n Product of two numbers:"<<mul;
}

inline void oper ::division()
{
div=a/b;
cout<<"\n Division of two numbers:"<<div;
}
int main()
{
cout<<"\n PROGRAM USING INLINE FUNCTION \n";
oper a;
a.get();
a.sum();
a.difference();
a.product();
a.division();
getch();
}
