#include <iostream>
#include<queue>
#include <stack>
#
using namespace std;
struct Graphnode {
    int vertex;
    Graphnode* next;
};

struct listgraph {
    Graphnode* list[10];
    int n;
};


void initgraph(listgraph& graph, int nov) {
    graph.n = nov;
    for (int i = 0; i < nov; i++) {
        graph.list[i] = NULL; 
    }
}

void creategraph(listgraph& graph) {
    char ans;
    for (int i = 0; i < graph.n; i++) {
        for (int j = 0; j < graph.n; j++) {
            cout << "Edge between " << i+1 << " and " << j+1 << "? (y/n): ";
            cin >> ans;

            if (ans == 'y') {
                Graphnode* newnode = new Graphnode{j+1, NULL};
                if (!graph.list[i]) {
                    
                    graph.list[i] = newnode;
                } else {
                    Graphnode* temp = graph.list[i];
                    while (temp->next) {
                        temp = temp->next;
                    }
                    temp->next = newnode;
                }
            }
        }
    }
}

void display(listgraph& graph) {
    for (int i = 0; i < graph.n; i++) {
        cout << "Vertex " << i+1 << " -> ";
        Graphnode* temp = graph.list[i];
        while (temp) {
            cout << "v" << temp->vertex << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
}
void bfs(const listgraph& graph, int startVertex) {
    bool visited[10] = {false}; // Initialize an array to keep track of visited vertices
    queue<int> q;               // Queue to manage the traversal order

    // Mark the starting vertex as visited and add it to the queue  
    visited[startVertex - 1] = true;
    q.push(startVertex);

    cout << "\nBFS starting from vertex " << startVertex << ": ";
    
    // Continue until there are no more vertices to visit
    while (!q.empty()) {
        int v = q.front(); // Get the next vertex from the queue
        q.pop();           // Remove it from the queue

        cout << v << " ";  // Print the current vertex (part of the traversal order)

        // Go through all adjacent vertices (neighbors) of vertex `v`
        Graphnode* temp = graph.list[v - 1];
        while (temp) {
            // If the neighboring vertex hasn't been visited
            if (!visited[temp->vertex - 1]) {
                visited[temp->vertex - 1] = true; // Mark it as visited
                q.push(temp->vertex);             // Add it to the queue
            }
            temp = temp->next; // Move to the next neighbor
        }
    }
    cout << endl;
}

int main() {
    int nov;
    cout << "Enter the number of vertices: ";
    cin >> nov;
    
    listgraph graph;
    initgraph(graph, nov);

    cout << "Enter edges for the graph:\n";
    creategraph(graph);

    cout << "\nDisplaying the adjacency list of the graph:\n";
    display(graph);

    return 0;
}
