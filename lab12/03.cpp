#include <iostream>
using namespace std;

const int MAX = 100;
const int INF = 999;

int graph[MAX][MAX];
int dist[MAX][MAX];

void floydWarshall(int n) {
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
dist[i][j] = graph[i][j];}
}
for (int k = 0; k < n; k++) {
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (dist[i][k] + dist[k][j] < dist[i][j]) {
dist[i][j] = dist[i][k] + dist[k][j];}}}
}

cout << "\nAll-Pairs Shortest Path Matrix:" << endl;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (dist[i][j] == INF) {
cout << "INF ";
} else {
                cout << dist[i][j] << " ";}
}
cout << endl;
}
}

int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
if (i == j) {
    graph[i][j] = 0;
    } else {
        graph[i][j] = INF;}}
}
cout << "Enter edges in format: u v weight" << endl;
for (int i = 0; i < m; i++) {
int u, v, w;
cin >> u >> v >> w;
graph[u][v] = w;
}
floydWarshall(n);
}

