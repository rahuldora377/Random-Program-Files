#include<iostream>
#include<conio.h>

using namespace std;

class base
{
    private:
    void display()
    {
      cout<<"I am Inside Private Class"<<endl;
    } 
    protected:
    void display2()
    {
        cout<<"I am Inside Protected Class"<<endl;
    }

    public:
    void display3()
    {
            cout<<"I am Inside Public Class"<<endl;
    }
};

class drv: public base
{
    public:
    void display4()
    {
        display2();
        cout<<"I am Inside Derived Class"<<endl;
    }
};

int main()
{
    drv d;
    d.display4();

    
}