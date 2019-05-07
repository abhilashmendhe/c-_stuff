#include <iostream>

using namespace std;

int main()
{
    int *p = new int[5];
    p[0] = 10;
    p[4] = 20;

    for(int i=0; i<5; i++)
        cout<<p[i]<<" ";

        cout<<endl;
    cout<<p[5]<<endl;

    delete []p;
    p = nullptr;
    
}