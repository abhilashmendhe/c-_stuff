#include<iostream>

using namespace std;

class Car
{
    public:

        virtual void start() = 0;

        virtual void stop() = 0;
};

class Swift: public Car
{
    public:

        void start()
        {
            cout<<"Swift started!!!"<<endl;

        }
        void stop()
        {
            cout<<"Swift stopped!!!"<<endl;
        }
};

class City: public Car
{
    public:

        void start()
        {
            cout<<"City started!!!"<<endl;

        }
        void stop()
        {
            cout<<"City stopped!!!"<<endl;
        }
};


int main()
{
    
    Car *c = new Swift();

    c->start();
    c->stop();

    c = new City();
    c->stop();
}