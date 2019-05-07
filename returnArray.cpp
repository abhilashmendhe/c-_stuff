#include<iostream>
using namespace std;


int * arr(int n)
{
    int *p = new int[n];
    return p;
}

int main()
{
    int *A;
    A = arr(5);
    for(int i=0; i<5; i++)
    cout<<A[i];
}