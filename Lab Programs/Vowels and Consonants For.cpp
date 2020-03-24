#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
      char str[10],a,e,i,o,u;
      int j,len=0,len1=0;
      
      cout<<"Enter any string : ";
      cin>>str;
      
      for(j=0;str[j]!='\0';j++)
      
                               if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
                               len++;
                               else
                               len1++;
      
      cout<<""<<len;
      cout<< " "<<len1;
      getch();
      }
