#include<iostream>
#define PI 3.1452
#define c cout
#define SQR(x) (x*x)
#define MSG(m) #m

#ifndef PI
    #define PI 3.14
#endif
using namespace std;

int main()
{
    cout<<PI<<endl;
    c<<"Hiii"<<endl;
    cout<<SQR(10)<<endl;
    cout<<MSG(hello)<<endl;
}
