#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"Default Constructor"<<endl;
        }
        Base(int x)
        {
            cout<<"Base Constructor: "<<x<<endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Default Constructor"<<endl;
        }
        Derived(int x, int y):Base(x)
        {
            cout<<"Derived Constructor: "<<y<<endl;
        }
};


int main()
{
    Derived d(10,20);
}