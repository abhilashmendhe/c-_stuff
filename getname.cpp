#include <iostream>

using namespace std;


int main()
{
    string name;
    cout<<sizeof(name);
    cout<<"Enter your name"<<'\n';
    //cin>>name;
    //cout<<"Welcome "<<name;
    cout<<"\n\n";   
    getline(cin,name);
    cout<<"Welcome "<<name;
    cout<<'\n';
    cout<<sizeof(name);
    return 0;
}