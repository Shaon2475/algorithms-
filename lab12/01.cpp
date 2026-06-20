#include <iostream>
using namespace std;

int G[100][100];
int dist[100];
int pred[100];
bool visited[100];

int extractMin(int n) {
int minDist = 999;
int u = -1;
for (int i = 0; i < n; i++) {
if (!visited[i] && dist[i] < minDist) {
    minDist = dist[i];
u = i;
}}
return u;
}

void Relax(int u, int v, int n) {
if (dist[v] > dist[u] + G[u][v]) {
dist[v] = dist[u] + G[u][v];
    pred[v] = u;
}
}

void dijkstra(int n, int s) {
for (int i = 0; i < n; i++) {
dist[i] = 999;
pred[i] = -1;
visited[i] = false;}
dist[s] = 0;

for (int count = 0; count < n; count++) {
int u = extractMin(n);
if (u == -1) break;
visited[u] = true;

for (int v = 0; v < n; v++) {
if (G[u][v] != 0 && !visited[v]) {
Relax(u, v, n);
}
}
}
cout << " Vertex Distance from Source";
for (int i = 0; i < n; i++) {
if (dist[i] == 999) {
    cout << i << "\tINF\n";
} else {
       cout << i << "\t" << dist[i] << endl;
}
}
cout << "\nPredecessor Array (for path reconstruction):\n";
for (int i = 0; i < n; i++) {
    cout << "Node " << i << ": " << pred[i] << endl;
}
}

int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    G[i][j] = 0;

cout << "Enter edges in the format: u v weight";
    for (int i = 0; i < m; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    G[u][v] = w;

    }

    int source;
    cout << "Enter source vertex: ";
    cin >> source;

    dijkstra(n, source);
}

