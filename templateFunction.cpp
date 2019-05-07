#include <iostream>
using namespace std;

template<class T>

T Max(T a, T b)
{
    return (a>b)?a:b;
}


int main()
{
    cout<<Max(10,8);
    cout<<Max(8.9,2.3);
    return 0;
}