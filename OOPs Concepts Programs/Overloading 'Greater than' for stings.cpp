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
      void operator>(String t);
};

void String :: getinfo()
{
      cout<<"\nEnter the two Stings to be compared\n";
      cin>>str;
}
void String :: display()
{
     cout<<"\nThe strings entered is \n";
     cout<<" "<<str;
}
void String :: operator>(String t)
{
    int temp,temp1;
    cout<<"\nThe strings are being compared\n";
    temp=strlen(str);
    temp1=strlen(t.str);
    if(temp>temp1)
    {
    cout<<"The First string is large than the Second ";
    }
    else
    {
    cout<<"The first string is small than the Second";
    }                    
}

int main()
{
    int temp;
    String s,a;
    s.getinfo();
    a.getinfo();
    s.display();
    a.display();
    s>a; 
    getch();
}
