#include<iostream>

using namespace std;

int main()
{
    int a=10,b=3,c;

    try
    {
        if(b==0)
            throw 101;
        else
        {
            c = a / b;
        }
        
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero error code: "<<e<<endl;
    }
    
}