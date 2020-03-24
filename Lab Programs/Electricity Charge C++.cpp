#include<conio.h>
#include<iostream>
using namespace std;
main()
{
      float cn,pr,cr,tr;
      float pric;
      cout<<"Enter the Customer number\nPrevious reading\nCurrent reading.";
      cin>>cn>>pr>>cr;
      tr=cr-pr;
      cout<<"The Customer number entered is "<<cn;
      
      if(tr<=300)
      cout<<"You have been charged Rps 150 ";
      
      else if((tr>300)&&(tr<=500))
      {
      pric=((1*(tr-300))+150);
      cout<<"You have been charged Rps "<<pric;
      }
      
      else if((tr>500)&&(tr<=1000))
      {
      pric=(((tr-500)/2)+150+199);
      cout<<"You have been charged Rps "<<pric;
      }
      
      else if(tr>1000)
      {
      pric=(150+199+249.5+((tr-1000)/4));
      cout<<"You have been charged Rps "<<pric;
      }
      getch();
      } 
