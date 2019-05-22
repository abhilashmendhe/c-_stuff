#include<iostream>
using namespace std;

int **mat;
int *queue;
int *visited;
int f=-1,r=-1;
int pos=0;
int *stack;
int *stackvisited;

class createMat
{
    private:
        int s;
    public:
        createMat(int size)
        {
            s = size;
            mat = new int*[s];
            for(int i=0; i<s; i++)
            {
                mat[i] = new int[s];
            }
        }

        void insert(int src,int dest);
};
void createMat::insert(int src,int dest)
{
    mat[src][dest] = 1;
    mat[dest][src] = 1;
}

void enqueue(int node)
{
    queue[++r] = node;
}

int dequeue()
{
    f++;
    return queue[f];
}

void bfs(int i)
{
    int u;
    cout<<i;
    cout<<" ";
    visited[i] = 1;
    enqueue(i);

    while(f!=r)
    {
        u = dequeue();
        //cout<<" U: "<<u<<endl;
        for(int v=0; v<5; v++)
        {   //cout<<mat[u][v]<<" ";
            if(mat[u][v] == 1 && visited[v]==0)
            {
                //cout<<"u: "<<u<<" v: "<<v;
                cout<<v<<" ";
                visited[v] = 1;
                enqueue(v);
            }
        }
        //cout<<endl;
    }
}


void push(int node)
{
    if(pos==5)
    {
        cout<<"Stack Full"<<endl;
    }
    else
        stack[pos++] = node;
}

int pop()
{
    if(pos==0){
        cout<<"Stack is empty!!"<<endl;
    }else
        return stack[--pos];
}
void dfs(int i)
{

    while(pos>=0)
    {
        cout<<i<<" ";
        stackvisited[i] = 1;

        for(int v=0; v<5; v++)
        {
            if(mat[i][v]==1 && stackvisited[v]!=0)
            {
                int temp = i;
                i = mat[i][v];
                push(temp);
                break;
            }
            
            
            
        }
    }
}

void DFS(int i)
{
    if(stackvisited[i]==0)
    {
        cout<<i<<" ";
        stackvisited[i] = 1;
        for(int v=0; v<5; v++)
        {
            if(mat[i][v]==1 && stackvisited[v]!=0)
                DFS(v);
        }
    }
}
int main()
{
    //cout<<mat;
    cout<<endl;
    int s;
    cout<<"Enter size of nodes: ";cin>>s;
    createMat *m = new createMat(s);
    m->insert(0,1);
    m->insert(0,3);
    m->insert(1,4);
    m->insert(2,0);
    m->insert(2,1);
    m->insert(2,3);
    m->insert(4,2);
    cout<<endl;

    cout<<"Graph"<<endl;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    queue = new int[5];
    visited = new int[5];

    cout<<endl;
    bfs(4);
    cout<<endl;

    stack = new int[5];
    stackvisited = new int[5];

    cout<<endl;
    dfs(0);
    //DFS(0);
    cout<<endl;
    /*push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    //push(6);
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<"Position is "<<pos<<endl;
    cout<<endl<<"Stack is"<<endl;
    for(int i=0; i<pos; i++)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;*/

}
