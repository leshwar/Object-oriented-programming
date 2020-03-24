#include<conio.h>
#include<iostream>
using namespace std;

class complex
{
      int real;
      int imag;
      public :
      friend istream operator>>(istream &,complex c);
      friend ostream operator <<(ostream &,complex c);
};

istream &istream operator>>(istream &,complex &)
{
              istream input;
              input>>c.real;
              input>>c.imag;
              return(input);
}
ostream &ostream operator <<(ostream &,complex c)
{
              ostream output;
              output<<c.real;
              output<<c.imag;
              return(output);
}
int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    getch();
}
