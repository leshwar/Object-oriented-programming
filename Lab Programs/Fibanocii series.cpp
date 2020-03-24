#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int previous=0,current=1,i,n,next;
      cout<<"Enter the number of terms ";
      cin>>n;
      
      while(i<n)
      {
                      cout<<" "<<previous;
                      next=previous+current;
                      previous=current;
                      current=next;
                      i++;
                      }
                      getch();
                      }
