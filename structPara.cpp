#include<iostream>
using namespace std;

struct Rectangle
{
    int l;
    int b;
};

int area(struct Rectangle &r)
{
    r.l = 100;
    cout<<&r<<endl;
    return r.b*r.l;
}

int main()
{
    struct Rectangle r = {10,4};
    cout<<&r<<endl;
    cout<<"Area is "<<area(r)<<endl;
}