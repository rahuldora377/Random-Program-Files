#include<iostream>
#include<conio.h>

using namespace std;

class A
{
    public:
    void display()
    {
        cout<<"I am inside class A"<<endl;
    }
};
class B
{
    public:
    void display()
    {
        cout<<"I am inside class B"<<endl;
    }
};

class C:public A, public B
{
    public:
    void display()
    {
        cout<<"I am inside class C"<<endl;
        // B::display();//calling display function of class B
    }
};

int main()
{
    C obj;
    obj.display();// automatically call the display function of class C
    obj.A::display();//calling display fuction of class A
}