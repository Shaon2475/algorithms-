#include <iostream>
using namespace std;

struct Node {
    int to, weight;
    Node* next;
};
Node** createAdjList(int V) {
    Node** adj = new Node*[V];
    for (int i = 0; i < V; ++i)
        adj[i] = nullptr;
    return adj;
}
void addEdge(Node** adj, int from, int to, int weight) {
    Node* newNode = new Node{to, weight, adj[from]};
    adj[from] = newNode;
}
void printGraph(Node** adj, int V) {
for (int i = 0; i < V; ++i) {
    cout << "Node " << i << " -> ";
    Node* temp = adj[i];
    while (temp) {
    cout << "(" << temp->to << ", " << temp->weight << ") ";
    temp = temp->next;
    }
    cout << endl;
}
}
void deleteGraph(Node** adj, int V) {
for (int i = 0; i < V; ++i) {
Node* temp = adj[i];
while (temp) {
Node* next = temp->next;
    delete temp;
    temp = next;
}
}
    delete[] adj;
}

int main() {
    int V = 4;
    Node** adj = createAdjList(V);
    addEdge(adj, 0, 1, 2);
    addEdge(adj, 0, 2, 4);
    addEdge(adj, 1, 2, 1);
    addEdge(adj, 2, 3, 3);
    printGraph(adj, V);
    deleteGraph(adj, V);
    return 0;
}

