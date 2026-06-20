#include <iostream>
using namespace std;

void display(int graph[][10], int v) {
    cout << " the Directed Graph:" << endl;
    for (int i = 0; i < v; ++i) {
    for (int j = 0; j < v; ++j) {
        cout << graph[i][j] << " ";
}
        cout << endl;
}
}
int main() {
    int v, e;

    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;
    int graph[10][10] = {0};
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < e; ++i) {
        int u, v;
        cout << "Edge " << i + 1 << ": ";
        cin >> u >> v;
        graph[u][v] = 1;
    }
    display(graph, v);
}

