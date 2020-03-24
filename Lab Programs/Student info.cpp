#include<conio.h>
#include<iostream>
using namespace std;

class student
{
      char st_nam[20];
      int  reg_no;
      char branch;
      public:
             void getinfo()
             {
             cout<<"Enter the Student name:\nReg no:\nBranch:\n";
             cin>>st_nam>>reg_no>>branch;
             }
             void display()
             {
             cout<<"The entered details are:";
             cout<<" \n"<<st_nam<<" \n"<<reg_no<<" \n"<<branch;
             }
};
int main()
{
    
    student s;
    s.getinfo();
    s.display();
    getch();
}
