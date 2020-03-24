#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      char str[10],str1[10];
      int i,j,len=0,len1=0,flag;
      cout<<"Enter the 1st word";
      cin>>str;
      for(i=0;str[i]!='\0';i++)
      len++;
      cout<<"Enter the 2nd word";
      cin>>str1;
      for(j=0;str1[j]!='\0';j++)
      len1++;
      if(len!=len1)
      cout<<"The string lengths are not the same so strings are not equal\n";
      else
      {
      for(i=0;str[i]!='\0';i++)
      {
      for(j=0;str1[j]!='\0';j++)
      {
      str[i]=str1[j];
      flag=1;
      }
      }
      }
      if(flag==1)
      cout<<"The words are the same";
      else
      cout<<"The words are not the same";
      getch();
}
