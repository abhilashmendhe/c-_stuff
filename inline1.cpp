#include<iostream>
using namespace std;

class Test{
    public:
        void fun1()
        {
            cout<<"Function1"<<endl;
        }
        inline void fun2();
};

void Test::fun2()
{
    cout<<"Non inline!!"<<endl;
}

int main()
{
    Test t;
    t.fun1();
    t.fun2();
}