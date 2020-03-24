//Implementation of arrays within a class.
#include<conio.h>
#include<iostream>
using namespace std;
const int size=5;
class array
{
           int a[10];
           public:
                  void getdata();
                  void display();
};
void array :: getdata()
{
     cout<<"Enter the elements of the array\n";
     for(int i=0;i<size;i++)
     cin>>a[i];
}
void array:: display()
{
     cout<<"The entered elements are \n";
     for(int i=0;i<size;i++)
     cout<<" "<<a[i];
}
int main()
{
    array A;
    A.getdata();
    A.display();
    getch();
}
            
