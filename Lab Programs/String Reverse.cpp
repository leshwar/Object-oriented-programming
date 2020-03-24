#include<conio.h>
#include<iostream>
using namespace std;
main()
{
    char str[30];
    int i,len;
    
    cout<<"Enter the String which is to be reversed\n";
    cin>>str;
    len=strlen(str);
    cout<<"\nThe Reverse is : ";
    for(i=len-1;i>=0;i--)
    {
    cout<<""<<str[i];
    }
    getch();
}
