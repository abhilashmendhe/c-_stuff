#include<iostream>
using namespace std;


class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int length, int breadth)
        {
            this->length = length;
            this->breadth = breadth;
        }

        int area()
        {
            return length*breadth;
        }

        int perimeter()
        {
            return 2*(length+breadth);
        }
};

int main()
{
    Rectangle r(10,5);
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;
}
