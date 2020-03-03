#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

//constructor

class swapx
{
    int a,b,c;
    public:
        swapx()
        {
            cout<<"Enter First Number: ";
            cin>>a;
            cout<<"Enter Second Number: ";
            cin>>b;
        }
        ~swapx()
        {
            c=a;
            a=b;
            b=c;
            cout<<"Value Of A: "<<a<<endl;
            cout<<"Value Of B: "<<b<<endl;
        }
};

int main()
{
    swapx s1;
}