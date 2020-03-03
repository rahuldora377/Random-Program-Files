#include<iostream>
using namespace std;
int cube(int);
int cube(int,int);
int main()
{
    int a,b,c;
    printf("Enter A Number: ");
    cin>>a;
    cout<<"Cube Of The Number Is:"<<cube(a)<<endl;
    printf("Enter A Number: ");
    cin>>b;
    printf("Enter A Number: ");
    cin>>c;
    cube(b,c);
    cout<<"Addition Of The Number: "<<cube(b,c);
}    

int cube(int x)
{
    return x*x*x;
}
int cube(int x,int y)
{
    return x+y;
}