#include<iostream>

using namespace std;


int main()
{
    //Matrix in stack

    cout<<endl<<"Matrix created in stack mem."<<endl;
    int A[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //Matrix partial in stack and heap mem.

    int *B[3];
    B[0] = new int[3];
    B[1] = new int[3];
    B[2] = new int[3];
    cout<<"Enter elements in matrix"<<endl;
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<endl<<"Matrix created partially in both stack and heap"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    delete []*B;

    //Matrix created in heap mem.
    cout<<endl;
    int **C;
    C = new int*[3];
    C[0] = new int[3];
    C[1] = new int[3];
    C[2] = new int[3];
    cout<<"Enter elements in matrix"<<endl;
    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            cin>>C[i][j];
        }
    }
    cout<<endl<<"Matrix created partially in both stack and heap"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    delete []*C;
    cout<<&C;
}