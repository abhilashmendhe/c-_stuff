#include<iostream>
using namespace std;


int main()
{
    int A[2][3] = {{1,2,3},{3,4,5}};
    //cout<<sizeof(A[0])/sizeof(int)<<endl;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<sizeof(A[0])/sizeof(int); j++)
            cout<<A[i][j]<<" ";
        
        cout<<endl;
    }

}