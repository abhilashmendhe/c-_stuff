#include<iostream>

using namespace std;


int &fun(int &x)
{
    cout<<x<<endl;

    return x;
}

int main()
{
    int x = 10;
    fun(x) = 25;
    cout<<x<<endl;
}