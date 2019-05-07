#include <iostream>

using namespace std;

int * fun()
{
    int *p = new int[5];

    for(int i=0; i<5; i++)
        p[i] = i;

    return p;
}

int main()
{

    int *p = fun();

    for(int i=0; i<5; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}