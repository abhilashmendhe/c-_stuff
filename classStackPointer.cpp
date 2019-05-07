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
    Rect r;
    Rect *p;
    p = &r;

    p->b = 10;
    p->l = 5;

    cout<<"Area: "<<p->area();
    cout<<endl;    

}