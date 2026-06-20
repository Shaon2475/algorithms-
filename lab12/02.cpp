#include <iostream>
using namespace std;

const int MAX = 100;
const int INF = 999;

int u[MAX], v[MAX], w[MAX];
int dist[MAX];
int pred[MAX];
bool bellmanFord(int n, int m, int source) {
for (int i = 0; i < n; i++) {
dist[i] = INF;
pred[i] = -1;
}
dist[source] = 0;
for (int i = 1; i <= n - 1; i++) {
for (int j = 0; j < m; j++) {
if (dist[u[j]] != INF && dist[v[j]] > dist[u[j]] + w[j]) {
dist[v[j]] = dist[u[j]] + w[j];
pred[v[j]] = u[j];
}}}
for (int j = 0; j < m; j++) {
if (dist[u[j]] != INF && dist[v[j]] > dist[u[j]] + w[j]) {
return false;
}}
return true;
}

int main() {
int n, m;
cout << "Enter number of vertices and edges: ";
cin >> n >> m;

cout << "Enter edges in format: u v weight" << endl;
for (int i = 0; i < m; i++) {
    cin >> u[i] >> v[i] >> w[i];
}
int source;
cout << "Enter source vertex: ";
cin >> source;

bool noNegativeCycle = bellmanFord(n, m, source);

if (!noNegativeCycle) {
    cout << "Graph contains a negative weight cycle. Shortest path not possible." << endl;
} else {
    cout << "Vertex  Distance from Source" << endl;
    for (int i = 0; i < n; i++) {
if (dist[i] == INF) {
cout << i << "INF" << endl;
} else {
cout << i << " " << dist[i] << endl;
}}
cout << "Predecessor Array (for path reconstruction):" << endl;
for (int i = 0; i < n; i++) {
cout << "Node " << i << ": " << pred[i] << endl;
}}
}

