#include <iostream>

using namespace std;
int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout<<"Address of p: "<<&p;
    cout<<endl;
    cout<<"Value stored in p: "<<p;
    cout<<endl;
    cout<<"Derefrenced *p: "<<*p;
    cout<<endl;
}