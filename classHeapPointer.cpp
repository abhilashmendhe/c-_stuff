#include<iostream>
using namespace std;

class Rect
{
    public:
        int l,b;

    int area()
    {
        return l*b;
    }
};

int main()
{
    Rect *p = new Rect;

    p->b = 5;
    p->l = 8;

    cout<<"Area: "<<p->area();
    cout<<endl;
}