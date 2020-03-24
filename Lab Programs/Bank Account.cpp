#include<conio.h>
#include<iostream>
using namespace std;

class Bank_account//Creating Class.
{
      int  acc_no;
      char name[20];
      char address[20];
      char acc_type[20];
      public:
//Getting Details.
void details()
{
      cout<<"Enter the acc_no:\nName:\nAddress:\nAccount type:\n";
      cin>>acc_no;
      gets(name);
      gets(address);
      gets(acc_type);
}
//Searching Account Number
int search(int a)
{
      int key,flag=0; 
      key=a;
      if(acc_no==key)
      {
      cout<<"The Account has been Found";
      return 1;
      }
      else
      {
      return 0;
      }
}
void display()
{
     cout<<acc_no;
      cout<<name;
      cout<<address;
      cout<<acc_type; 
}
~Bank_account()
{
cout<<"\nThe Object has been Deleted\n";
}
};
int main()
{
    Bank_account ba[10],sd;
    int i,key,del,temp,count=0,choice;
    
    get:
    cout<<"\nEnter your option:\n1.Getdata\n2.Display\n3.Delete ";
    cin>>choice;
    
    switch(choice)
    {
                  case 1:
                  {
    //Getting Details.
                  cout<<"Enter the details of the 5 Account Holders ";
                  for(i=1;i<=5;i++)
                  {
                  ba[i].details();
                  }
                  goto get;
                  break;
                  }
                  case 2:
                       {    
    //Searching Account Number.
                        cout<<"Enter the Account number to be Searched";
                        cin>>key;
                        for(i=1;i<=2;i++)
                        {
                        temp=ba[i].search(key);
                        if(temp==0)
                        count++;
                        }
                        if(count==2)
                        {cout<<"The Account has not been Found";}
                        goto get;
                        break;
                        }
                        case 3:
                             {
    //Account Deletion.            
                             cout<<"Enter the Account to be deleted\n";
                             cin>>del;
                             ba[del];
                             goto get;
                             break;
                             }
}
    getch();
}
