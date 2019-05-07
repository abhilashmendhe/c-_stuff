#include <iostream>
using namespace std;

class Rectangle 
{
    public:
        int length;
        int breadth;

        int area()
        {
            return length*breadth;
        }
};

int main()
{
    Rectangle r1;
    r1.length=10;
    r1.breadth=10;
    cout<<r1.area()<<endl;
}
