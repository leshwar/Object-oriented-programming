#include<iostream> 
#include<conio.h>
using namespace std;
main()
{
      char str[20],str1[20];
      int i=0,j=0;
      cout<<"Enter the 1st string : ";
      cin>>str;
      cout<<"Enter the 2nd string : ";
      cin>>str1;
      
      while(str[i]!='\0')
      {
      i++;
      }
      while(str1[j]!='\0')
      {
      str[i]=str1[j];
      i++;
      j++;
      }      
      str[i]='\0';
      cout<<"The resultant string is : "<<str;
      getch();
      }                                           
