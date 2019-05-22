#include<iostream>
using namespace std;



struct Node
{
    int data;
    struct Node *next;
};

struct Node *root;
struct Node *temp;

void insert(int data)
{
    struct Node *n = new Node;
    
    
    if(root == NULL)
    {
        root = n;
        temp = n;
        n->data = data;
    }
    else
    {
        temp->next = n;
        n->data = data;
        temp = n;

    }
    
}

void display()
{
    cout<<"Linked List"<<endl;
    struct Node *t = root;
    while(t != NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);  
    display();


    cout<<endl;
    return 0;
}
