#include<conio.h>
#include<iostream>
using namespace std;
enum shape
{circle,triangle,rectangle};
main()
{
      int key;
      cout<<"Enter the shape number you want to print\n";
      cin>>key;
      switch(key)
      {
                 case circle:
                      cout<<"circle";
                      break;
                 case triangle:
                      cout<<"triangle";
                      break;
                 case rectangle:
                      cout<<"rectangle";
                      break; 
      }
      getch();
}
      
