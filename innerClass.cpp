#include<iostream>
using namespace std;

class Outer
{
    public:
        int a = 0;
        static int b;

        void fun()
        {
            i.show();
        }

        class Inner
        {
            public:
                int x = 25;
                void show()
                {
                    cout<<b<<endl;
                }
        };
        Inner i;
};

int Outer::b = 20;

int main()
{
    Outer o1;
    o1.fun();
}