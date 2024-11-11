#include<iostream>
#include<queue>
#include <stack>
using namespace std;

struct graphnode{
    int vertex;
    graphnode *next;
};

struct listgraph{
    graphnode *list[10];
    int n;
};

void initgraph(listgraph& graph, int nov)
{
    graph.n = nov;
    for (int i = 0; i < nov; i++)
    {
        graph.list[i] = NULL;
    }
}

void create(listgraph& graph)
{
    char ans;
    for (int i = 0; i < graph.n; i++)
    {
        for (int j = 0; j < graph.n; j++)
        {
            cout << "edge between " << i+1 << " and " << j+1 << " ?(y/n): ";
            cin >> ans;
            if (ans == 'y')
            {
                graphnode *newnode = new graphnode{j+1,NULL};
                if (!graph.list[i])
                {
                    graph.list[i] = newnode;
                }
                else
                {
                    graphnode *temp = graph.list[i];
                    while (temp->next)
                    {
                        temp = temp->next;
                    }
                    temp->next = newnode;
                }
                
            }
            
        }
    }
    
}

void display(listgraph& graph)
{
    for (int i = 0; i < graph.n; i++)
    {
        cout << "vertices " << i+1 << " -> ";
        graphnode *temp = graph.list[i];
        while (temp)
        {
            cout << "v: "  << temp->vertex << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
        

    } 
    
}

void bfs(listgraph& graph, int startvertex)
{
    bool visited[10] = {false};
    queue<int> q;
    visited[startvertex -1] = true;
    q.push(startvertex);    
    cout << "starting from startvertex" << startvertex<< "\n";
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        graphnode *temp  =  graph.list[v-1];
        while (temp)
        {
            if (!visited[temp->vertex-1])
            {
                visited[temp->vertex-1] = true;
                q.push(temp->vertex);   
            }
            temp = temp->next;
            
        }

        cout<<endl;
    }
}

void dfs(listgraph& graph,int startvertex)
{
    bool visited[10] = {false};
    stack<int>s;

    s.push(startvertex);

    cout << "DFS STARTING FROM VERTEX: " <<startvertex<<endl;
    while (!s.empty())
    {
        int v = s.top();
        s.pop();
        if (!visited[v-1])
        {
            cout << v ;
            visited[v-1] =true;

            graphnode *temp = graph.list[v-1];
            while (temp)
            {
                if(!visited[temp->vertex-1])
            {
                s.push(temp->vertex);
            }
            temp=temp->next;
            }
            
        }
        cout<<endl;
    }
    

}


int main(int argc, char const *argv[])
{
    int nov;
    cout << "enter number of vertices: ";
    cin >> nov;
    listgraph graph;
    initgraph(graph,nov);
    cout << "enter values: ";
    create(graph);
    cout << "displaying your graph";
    display(graph);
    int sv;
    cout <<"enter your startvertex: ";
    cin >>sv;
    dfs(graph,sv);
    return 0;
}

