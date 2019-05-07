#include<iostream>

using namespace std;

int x = 20;

int main()
{
    
    int x = 10;

    {
        int x = 100;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
    int *p = new int(30);
    cout<<*p<<endl;
}