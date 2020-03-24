void sortprice();
#include<conio.h>
#include<iostream>
using namespace std;

class nokia 
{
     struct ex
     { long mob_mod;
      float mob_pri;
      int mob_dem;
      }obj[10];
      public:
      void getinfo();
      void display();
      void access();
};
void nokia:: getinfo()
{
     int i;
     for(i=1;i<=3;i++)
    {
     cout<<"Model number,Price,Demend Level\n";
     cin>>obj[i].mob_mod>>obj[i].mob_pri>>obj[i].mob_dem;
    }
    
}
void nokia:: display()
{
     int i;
      for(i=1;i<=3;i++)
    {
     cout<<"Model number\t"<<obj[i].mob_mod;
     cout<<"\tPrice\t"<<obj[i].mob_pri;
     cout<<"\tDemand Level\t"<<obj[i].mob_dem;
}}
void nokia:: access()
{
      int i,j;
      float temp;
      for(i=1;i<=3;i++)
      {
      for(j=1;j<=3;j++)
      {
      if(obj[i].mob_pri<obj[i].mob_pri)
      {
      temp=obj[i].mob_pri;
      obj[i].mob_pri=obj[i].mob_pri;
      obj[i].mob_pri=temp;
      }
      }
      }
      for(i=1;i<=3;i++)
      {
                      cout<<"\n"<<obj[i].mob_pri<<"\t"<<obj[i].mob_mod;
      }
} 
   
int main()
{
    nokia no;  
    int i,j,n;
    cout<<"Enter the Details of the Mobiles ";
    no.getinfo();
    cout<<"\nThe details entered by YOU are \n";
    no.display();

    no.access();
    //for(i=1;i<=3;i++)
    //{
    //no[i].access();
    //}
    /*  for(i=1;i<=3;i++)
      {
      for(j=1;j<=3;j++)
      {
      if(no[i].mob_pri<no[j].mob_pri)
      {
      temp=no[i].mob_pri;
      no[i].mob_pri=no[j].mob_pri;
      no[j].mob_pri=temp;
      }
      }
      }
      for(i=1;i<=3;i++)
      {
                      cout<<" "<<no[i].mob_pri;
      }*/
    
getch();
}
