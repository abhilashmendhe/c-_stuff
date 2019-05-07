#include<iostream>
using namespace std;

class Base
{
    public:
        int x;
        void show()
        {
            cout<<"x: "<<x<<endl;
        }
};

class Derived:public Base
{
    public:
        int y;
    
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    Derived d;
    d.x = 10;
    d.y = 20;
    d.display();
}