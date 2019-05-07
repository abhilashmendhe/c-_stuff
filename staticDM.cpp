#include<iostream>
using namespace std;

class Test
{
    private:
        int a;
        int b;

    public:
        static int count;

        Test()
        {
            a = 10;
            b = 10;
            count++;
        }

        static int getC()
        {
            return count;
        }
};

int Test::count = 0;

int main()
{
    Test t1;
    cout<<t1.getC()<<endl;
    Test t2;

    cout<<Test::count<<endl;
    
}
