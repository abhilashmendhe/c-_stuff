#include<iostream>

using namespace std;


int run(int n)
{
    static int x = 0;
    
    if(n>0)
    {
        x++;
        return run(n-1)+x;
    }
    return 0;
}

int main()
{
    int r = run(5);
    cout<<r<<endl;
    int r1 = run(5);
    cout<<r1<<endl;
}
