#include<iostream>
#include<conio.h>
using namespace std;

class stu
{
    int id;
    protected://to access "name" outside the class declared it as protected
    string name;
    public:
    void get_data()
    {
        cout<<"Enter Student Name: ";
        cin>>name;
        cout<<"Enter Student Roll No: ";
        cin>>id;
    }

    void show_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<id<<endl;
    }
};

class mark
{
    protected:
    int m[3];
    public:
     void get_mark()
     {
         for(int i=0;i<3;i++)
         {
             cout<<"Enter "<<i+1<<" Subject Mark:";
             cin>>m[i];
         }
     }

     void show_mark()
     {
          for(int i=0;i<3;i++)
          {
              cout<<"Mark Of"<< i+1 <<" Subject Is: "<<m[i]<<endl;
          }
     }
};

class result: public  stu, public mark
{
    int tot=0;
    float avg;
    public:
    void show()
    {
        for(int i=0;i<3;i++)
        {
            tot=tot+m[i];
        }
        avg=tot/3.0;
        cout<<"Total Mark Of: "<< name <<" Is: "<<tot<<endl;
        cout<<"Avg Of: "<<name<<" Is: "<<avg<<endl;
    }
};

int main()
{
    result R;//objact creation
    R.get_data();//as result is inherited from both the base class it can access the member function of both class
    R.show_data();//show information of student
    R.get_mark();//get mark of subject from user
    R.show_mark();//display mark inputed by user
    R.show();//show total and average
}
