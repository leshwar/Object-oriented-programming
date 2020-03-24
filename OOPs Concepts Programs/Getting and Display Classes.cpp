//Implementation of Class.
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
           cout<<"The Entries given were : ";
           cout<<" "<<emp_id<<" "<<emp_nam<<" "<<emp_dept;
      }
int main()
{
    employee e1;
    e1.getinfo();
    e1.display();
    getch();
}
