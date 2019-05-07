#include <iostream>
using namespace std;

typedef int marks;

int main(){
    marks m1,m2,m3;

    m1 = 10;
    m2 = 20;
    m3 = 30;

    cout<<m1<<'\n';
    char x1 = 128;

    cout<<(int)x1<<endl;
    int x=10,y=5,z=9;

    if(x<y && ++y<z)   
    cout<<x<<" if "<<y<<" "<<z;   
    else 
    cout<<x<<" "<<y<<" "<<z;  
    cout<<endl;
    cout<<(10&6);
    cout<<endl;  
    switch(10 & 6)   

{   

case 1: cout<<"One  ";   

case 2: cout<<"Two ";   
        break;
case 3: cout<<"Three ";   

}   

int a[] = {1,2};
cout<<sizeof(a)/4;
}