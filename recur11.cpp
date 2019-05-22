#include<iostream>
using namespace std;


int f (int &x, int c) 

{
    c = c - 1;
    cout<<"c: "<<c<<endl;
    if (c == 0) return 1; 
        x = x + 1; 
        cout<<"x: "<<x<<endl;
    return f(x,c) * x;
    

}

int main()
{
    int a = 5;
    int p = a;
    cout<<f(p,a)<<endl;
}