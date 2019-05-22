#include<iostream>
using namespace std;




class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *root;
Node *temp;

void insert(int data)
{
    Node *n = new Node(data);
    if(root == NULL)
    {
        root = n;
        temp = n;
    }
    else
    {
        temp->next = n;
        temp = n;
    }
    
}
void display()
{
    cout<<"Linked List"<<endl;
    Node *t = root;
    while(t != NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
}
void reverse()
{

    Node *p = root;
    Node *q = NULL;
    Node *r = NULL;

    while(p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    root = q;
}
bool isLoop()
{
    Node *t,*s;
    t = s = root;
    do
    {
        t = t->next;
        s = s->next;
        s = s!=NULL?s->next:NULL;
    } while (t&&s&& t!=s);
    
    if(t==s)
        return true;
    else
        return false;
    
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    //temp->next = root->next->next;
    cout<<isLoop()<<endl;
    //display();
    //display();
    cout<<endl;
    //reverse();
    //display();

    cout<<endl;
    return 0;
}
