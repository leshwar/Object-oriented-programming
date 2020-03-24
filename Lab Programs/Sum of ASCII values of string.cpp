#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    char str[30];
    int a[30],i,len=0,sum=0;
    
    cout<<"Enter the String whose ASCII values are to be found out\n";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
    len++;
    }    
    for(i=0;i<len;i++)
    {
    for(i=0;str[i]!='\0';i++)
    {
    a[i]=str[i];
    }
    }
    for(i=0;i<len;i++)
    {
    sum=sum+a[i];
    }
    cout<<"The ASCII values are : \n";
    for(i=0;i<len;i++)
    {
    cout<<" "<<a[i];
    }
    cout<<"\nThe sum of the ASCII values is : "<<sum;
    getch();
}
