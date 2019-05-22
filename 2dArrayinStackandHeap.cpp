#include<iostream>

using namespace std;

int main()
{

    int *A[3];

    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    A[0][0] = 10;
    
    cout<<A[0][0]<<endl;
}