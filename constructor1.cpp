#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int l;
        int b;
    
    public:
    
        Rectangle()
        {
            l = 0;
            b = 0;
        }
        Rectangle(int l, int b)
        {
            l = l;
            b = b;
        }
        Rectangle(Rectangle &r)
        {
            l = r.l;
            b = r.b;
        }
};


int main()
{
    Rectangle r;
    Rectangle r1(10,5);
    Rectangle r2(r);
}