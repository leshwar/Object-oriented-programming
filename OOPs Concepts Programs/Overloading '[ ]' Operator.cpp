#include<conio.h>
#include<iostream>
using namespace std;

class test
{
int a[10];
public:
int operator[](int i)
{
return i;
}
};
int main()
{
test t1;
int i,size;
cout<<"\nEnter the size of the Array\n";
cin>>size;
for(i=1;i<=size;i++)
{
cout<<" "<<t1[i]<<"\t";
}
getch();
}
