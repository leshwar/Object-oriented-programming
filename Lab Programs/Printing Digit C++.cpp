#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int rem,num,a=0,i=0;
      
      cout<<"Enter the number you want to print in words\n";
      cin>>num;
      while(num>0)
      {
      rem=num%10;
      a=a*10+rem;
      num=num/10;
      }
      
      cout<<" The print is :\n";
      
                   while(a!=0)
                   {
                   switch(a%10)
                   {
                      case 0:
                      cout<<" Zero ";
                      break;
                      
                      case 1:
                      cout<<" One ";
                      break;
                      
                      case 2:
                      cout<<" Two ";
                      break;
                      
                      case 3:
                      cout<<" Three ";
                      break;
                      
                      case 4:
                      cout<<" Four ";
                      break;
                      
                      case 5:
                      cout<<" Five ";
                      break;
                      
                      case 6:
                      cout<<" Six ";
                      break;
                      
                      case 7:
                      cout<<" Seven ";
                      break;
                      
                      case 8:
                      cout<<" Eight ";
                      break;
                      
                      case 9:
                      cout<<" Nine ";
                      break;
                      
                      }
        a=a/10;
                      }
        getch();
      }
