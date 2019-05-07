#include<iostream>
using namespace std;


class Base
{
    public:
        void fun1()
        {
            cout<<"Base class"<<endl;
        }
};

class Derived : public Base
{
    public:
        void fun2()
        {
            cout<<"Derived class"<<endl;
        }

};

int main()
{
    Derived d;
    Base *b = &d;
    
    b->fun1();

    Derived *dd = new Derived();

    dd->fun2();
}