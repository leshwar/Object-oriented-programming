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
      switch(str[j])
      {
      case 'a' :
          len++;
          break;
      case 'e' :
          len++;
          break;
      case 'i' :
          len++;
          break;
      case 'o' :
          len++;
          break;
      case 'u' :
          len++;
          break;
      default :
          len1++;
          break;
          }
      cout<<"Vowels"<<" "<<len;
      cout<<"Consonants"<<" "<<len1;
      getch();
      }
