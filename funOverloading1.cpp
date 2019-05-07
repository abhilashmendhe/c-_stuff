#include<iostream>
using namespace std;

class Base{

    public:
        void fun()
        {
            cout<<"Base class!!!"<<endl;
        }
};

class Derived:public Base 
{
    public:
        void fun(int x)
        {
            cout<<"Derived class!!!"<<x<<endl;
        }
};

int main()
{
    Derived d;
    d.Base::fun();
    d.fun(10);
}