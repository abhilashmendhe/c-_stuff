#include <iostream>
using namespace std;

int main()
{
    int a[] = {2,3,4,5};

    int *p = a;


    for(int i=0 ; i<4; i++)
    {
        cout<<*(a+i)<<" ";

    }
    cout<<endl;
    cout<<*p;
    p++;
    cout<<endl;
    cout<<*p;
    cout<<endl;

    int *b;
    int *c;
    int r = sizeof(b);
    int s = sizeof(c);
    cout<<r<<" "<<s;
    cout<<endl;
}