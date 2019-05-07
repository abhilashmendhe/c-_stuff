#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"Base Constructor called!!!!"<<endl;
        }

        virtual ~Base()
        {
            cout<<"Base Destroyed!!!"<<endl;
        }
};

class Derived: public Base
{
    public:
        Derived()
        {
            cout<<"Derived Constructor called!!!!"<<endl;
        }

        ~Derived()
        {
            cout<<"Derived destroyed!!!"<<endl;
        }
};

int main()
{
    Base *b1 = new Derived();
    delete b1;
}
