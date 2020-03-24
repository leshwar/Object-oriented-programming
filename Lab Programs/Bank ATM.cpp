#include<conio.h>
#include<iostream>
using namespace std;

class bankatm //Creating Class.
{
      int accno;
      int ib;
      int cb;
      char name[20];
      public:
      bankatm()
      {
      cb=1500;
      }
      void getdata()
      {
           cout<<"\nEnter the Name and Account number\n";
           cin>>name>>accno;
      }
      int deposit()
      {
           int amount;
           cout<<"\nEnter the amount you want to deposit\n";
           cin>>amount;
           cb=cb+amount;
           return(cb);
      }
      int withdrawal()
      {
          int amount;
          cout<<"\nEnter the amount of Rupees you want to withdraw\n";
          cin>>amount;
          cb=cb-amount;
          return(cb);
      }
      void display()
      {
           cout<<"The Details are:\n";
           cout<<" \n"<<name<<" \n"<<accno<<" \n"<<cb;
      }
      
};
int main()
{
    bankatm ba[10];
    int choice,i,j;
    
    cout<<"\nEnter the Details for three Users:";
    for(i=1;i<=3;i++)
    ba[i].getdata();
    
    get:
    cout<<"\nEnter your Choice\n1.Deposit\n2.Withdrawal\n3.Display:";
    cin>>choice;
    
    switch(choice)
    {
                  case 1:
                       {
                       cout<<"Enter the user to which you want to perform the operation:\n";
                       cin>>j;
                       ba[j].deposit();
                       goto get;
                       break;
                       }
                  case 2:
                       {
                       cout<<"Enter the user to which you want to perform the operation:\n";
                       cin>>j;
                       ba[j].withdrawal();
                       goto get;
                       break;
                       }
                  case 3:
                       {
                       cout<<"Enter the user to which you want to perform the operation:\n";
                       cin>>j;
                       ba[j].display();
                       goto get;
                       break;
                       }
    }
    getch();
}
