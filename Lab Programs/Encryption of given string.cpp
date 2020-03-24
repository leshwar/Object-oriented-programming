#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    char str[30];
    int a[30],i,len=0,sum=0;
    
    cout<<"Enter the String \n";
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
    a[i]=a[i]+1;
    }
    for(i=0;i<len;i++)
    {
    for(i=0;str[i]!='\0';i++)
    {
    str[i]=a[i];
    }
    }
    cout<<"\nThe word now becomes: "<<str;
    getch();
}
