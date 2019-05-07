#include <iostream>

using namespace std;

struct Student{
    
    int rollno;
    string name;
    string dept;
    float marks;

};

int main()
{
    
    struct Student s[5];


    cout<<sizeof(Student);
    cout<<endl;

    for(int i=0; i<5; i++)
    {
        int r;
        cout<<"Enter roll no: ";
        cin>>r;
        s[i].rollno = r;
        cout<<endl;
    }
}   