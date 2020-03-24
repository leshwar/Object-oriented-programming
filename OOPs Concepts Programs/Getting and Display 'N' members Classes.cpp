//Implementation of Class with 'N' objects.
#include<conio.h>
#include<iostream>
using namespace std;

class employee
      {
            int emp_id;
            char emp_nam[10];
            char emp_dept[10];
            
            public:
                   void getinfo();
                   void display();
      };
      void employee:: getinfo()
      {
           cout<<"Enter the Employee\n1.ID\n2.Name\n3.Dept\t";
           cin>>emp_id>>emp_nam>>emp_dept;
      }
      
      void employee:: display()
      {
           cout<<" "<<emp_id<<" "<<emp_nam<<" "<<emp_dept;
      }
int main()
{
    int i,n;
    employee e[10];
    cout<<"Enter the number of Employees ";
    cin>>n;
    for(i=0;i<n;i++)
    {
                    e[i].getinfo();
    }
       cout<<"The Entries given were : ";
    for(i=0;i<n;i++)
    {
                    e[i].display();
    }
    getch();
}
