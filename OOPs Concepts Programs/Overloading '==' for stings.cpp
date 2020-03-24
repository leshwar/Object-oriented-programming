#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class String
{
      char str[50];
      public:
      void getinfo();
      void display();
      int operator==(String t);
};

void String :: getinfo()
{
      cout<<"\nEnter the Sting to be compared\n";
      cin>>str;
}
void String :: display()
{
     cout<<"\nThe string entered is \n";
     cout<<" "<<str;
}
int String :: operator==(String t)
{
    int temp;
    cout<<"\nThe strings are being compared\n";
    temp=strcmp(str,t.str);
    return(temp);
}

int main()
{
    int temp;
    String s,a;
    s.getinfo();
    a.getinfo();
    s.display();
    a.display();
    temp=s==a; 
    if(temp==0)
    {
    cout<<"\nThe strings are equal\n";
    }
    else
    {
    cout<<"\nThe strings are not equal\n";
    }
    getch();
}
