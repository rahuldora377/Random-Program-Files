#include<iostream>
#include<conio.h>
using namespace std;

class emp
{
   int id;
   string name;
   float salary;
   public:
        void getdata(int id, string name, float salary)
        {
            this->id=id;
            this->name=name;
            this->salary=salary;
        }

        void showdata();
};

void emp::showdata()
{
    cout<<"Emp Id: "<<id<<endl;
    cout<<"Emp Name: "<<name<<endl;
    cout<<"Emp Salary: "<<salary<<endl;
}

int main()
{
    emp e[3];
    int i,id;
    float sal;
    string name;
    for(i=0;i<3;i++)
    {
        cout<<"Enter Emp Id: ";
        cin>>id;
        cout<<"Enter Emp Name: ";
        cin>>name;
        cout<<"Enter Emp Salary: ";
        cin>>sal;
        e[i].getdata(id,name,sal);
    }
    cout<<".........OUTPUT........."<<endl;
    for(i=0;i<3;i++)
    {
        e[i].showdata();
    }
}
