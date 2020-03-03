#include<iostream>
#include<conio.h>

using namespace std;

class A
{
    public:
     int a,b;
     void geta()
     {
         cout<<"Enter the value f a: ";
         cin>>a;
     }
     void getb()
     {
         cout<<"Enter the value f b: ";
         cin>>b;
     }
     void show()
     {
         cout<<"value of a: "<< a <<endl 
         <<"value of b: "<<b<<endl;
     }
};

class B: private A
{
    public:
    int c,d;
    void getc()
    {
        geta();// as it is inherited as private we have to acess those data member using member function
        getb();
        cout<<"Enter value of c: ";
        cin>>c;
    }

    void getd()
   {
       cout<<"Enter value of d: ";
       cin>>d;
   }
   void showx()
   {
        show();
        cout<<"Value of c: "<<c <<endl<<"Value of d: "<<d<<endl;
   } 
};

int main()
{
    B t;
    t.getc();
    t.getd();
    t.showx();
}