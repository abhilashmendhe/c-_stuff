#include<iostream>
using namespace std;

void fun(int A[],int n)
{
    for(int i=0; i<n; i++)
        cout<<A[i]<<" ";

    cout<<endl;
}

int main()
{
    int A[] = {1,2,3,4,5};
    fun(A,5);

}
