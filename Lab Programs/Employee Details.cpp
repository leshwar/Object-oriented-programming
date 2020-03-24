#include<conio.h>
#include<iostream>
using namespace std;

class employee
{
      char empname[50];
      int empcode;
      char desig[50];
      int doj,age;
      public:
             void getdata();
             void display();
             void delet();
             ~employee()
             {
                        cout<<"\nThe Object has been Deleted\n";
             }
             int search(int a);
};

void employee :: getdata()
{
     cout<<"Enter the Employee name,Code,Designation,Date of joining(mm/dd/yy) and Age.\n";
     cin>>empname>>empcode>>desig>>doj>>age;
}
void employee :: display()
{
     cout<<" \n"<<empname<<" \n"<<empcode<<" \n"<<desig<<" \n"<<doj<<" \n"<<age;
}
int employee :: search(int a)
{
      int key,flag=0,cunt=0; 
      key=a;cunt++;
      if(empcode==key)
      {
      cout<<"The Account has been Found";
      display();
      return 1;
      }
      else
      {
      return 0;
}
}
int main()
{
    employee e[50];
    int i,choice,n,m,temp,temp1,d,f,key,temp2,count=0;
    get:
    cout<<"\nEnter your option:\n1.Getdata\n2.Display\n3.Insert\n4.Delete\n5.Edit\n6.Search ";
    cin>>choice;
    
    switch(choice)
    {
                  case 1:
                  {
                       cout<<"\nEnter the number of Employees: ";
                       cin>>n;
                       for(i=1;i<=n;i++)
                       {
                       e[i].getdata();
                       }
                       goto get;
                       break;
                  }
                  case 2:
                  {
                       for(i=1;i<=n;i++)
                       {
                       e[i].display();
                       }
                       goto get;
                       break;
                  }
                  case 3:
                  {
                       cout<<"\nEnter the number of Employee Details you want to insert:\n";
                       cin>>m;
                       temp=n;
                       temp1=n;
                       temp=temp+m;
                       m=temp1;
                       for(i=m;i<=n;i++)
                       {
                       e[i].getdata();
                       }
                       goto get;
                       break;
                  }
                  case 4:
                  {
                       cout<<"\nEnter the Employee Details you want to Delete:\n";
                       cin>>d;
                       e[d];
                       n--;
                       goto get;
                       break;
                  }
                  case 5:
                  {
                        cout<<"\nEnter the Employee Details you want to Edit:\n";
                        cin>>f;
                        e[f].getdata();
                        goto get;
                        break;
                  }
                  case 6:
                  {
                        cout<<"Enter the Employee Code to be Searched";
                        cin>>key;
                        for(i=1;i<=n;i++)
                        {
                        temp2=e[i].search(key);
                        if(temp2==0)
                        count++;
                        }
                        if(count==n)
                        {cout<<"The Account has not been Found";}
                        goto get;
                        break;
                  }     
                  
    }
   getch();
}             
                       
                             
