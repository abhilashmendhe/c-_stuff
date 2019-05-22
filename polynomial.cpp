#include<iostream>
using namespace std;
/*
struct Term
{
    int value;
    int coeff;
};

struct poly
{
    int n;
    struct Term *t;
};*/

class Term
{
    public:
        int coeff;
        int exp;
};

class Poly
{
    public:
        int n;
        Term *t;
};

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    Poly p;
    p.t = new Term[n];

    for(int i=0; i<n; i++)
    {
        int c,e;
        cout<<"Enter coefficient: ";cin>>c;
        p.t[i].coeff = c;
        cout<<"Enter exponennt: ";cin>>e;
        p.t[i].exp = e;
    }
}
