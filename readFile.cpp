#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("/home/amendhe/Desktop/MyFile.txt");

    string str;
    int x;
    infile>>str;
    infile>>x;
    
    cout<<str<<endl;
    infile.close();

    cout<<(int)'2'<<endl;

    int *A = new int[5];
    A[0] = 1;
    
    cout<<A[0]<<endl;
    A = new int[10];
    A[0] = 10;
    cout<<A[0]<<endl;
}