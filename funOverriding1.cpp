#include<iostream>
using namespace std;

class Base{

    public:
        virtual void fun()
        {
            cout<<"Base class!!!"<<endl;
        }
};

class Derived:public Base 
{
    public:
        void fun()
        {
            cout<<"Derived class!!!"<<endl;
        }
};

int main()
{
    Base *b = new Derived();

    b->fun();
}