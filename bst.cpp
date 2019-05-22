#include<iostream>
using namespace std;



class Node{

    public:
        int data;
        Node *left;
        Node *right;

        Node(int data)
        {
            this->data = data;
            left = right = NULL;
        }

};



Node *insertElement(Node *t, int data)
{
    if(t == NULL)
    {
        return new Node(data);
    }
    if(data < t->data)
        t->left = insertElement(t->left,data);
    else if(data > t->data)
        t->right = insertElement(t->right,data);

    return t;
    
}

void inorder(Node *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        cout<<t->data<<" ";
        inorder(t->right);
    }
}

Node *search(Node *t, int key)
{
    if(t!=NULL){
    if(t->data == key)
        cout<<key<<" found!!";
    else if(t->data > key)
        t->left = search(t->left,key);
    else if(t->data < key)
        t->right = search(t->right,key);
    
    }
    else
    {
        cout<<key<<" not found!!";
    }
    
}

int countNodes(Node *t)
{
    if(t!=NULL)
        return countNodes(t->left)+countNodes(t->right)+1;
    return 0;
}

int height(Node *p)
{
    int x,y;
    if(p != NULL)
    {
        x = height(p->left);
        y = height(p->right);
       
        if(x>y)
            return x+1;
        else
            return y+1;
        
    }
    return 0;
}

int main()
{   
    Node *root;
    root = insertElement(root,30);
    insertElement(root,20);
    insertElement(root,40);
    insertElement(root,35);
    insertElement(root,10);
    insertElement(root,42);
    insertElement(root,43);
   
    cout<<endl;
    inorder(root);
    cout<<endl;

    search(root,20);
    cout<<endl;
    int h = height(root);
    cout<<"Heigth: "<<h<<endl;
    //cout<<"Total nodes: "<<countNodes(root)<<endl;
}