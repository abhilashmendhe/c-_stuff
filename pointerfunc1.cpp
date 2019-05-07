#include <iostream>

using namespace std;

void display()
{
    cout<<"hello world"<<endl;
}
int main()
{
    void (*fp)();
    fp = display;
    (*fp)();
    delete fp;
}