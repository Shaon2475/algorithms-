#include <iostream>

using namespace std;

const int MAX = 100;

int graph[MAX][MAX];
bool visited[MAX];
int path[MAX];
int pathLen = 0;

bool dfs(int current, int destination, int n) {
visited[current] = true;
path[pathLen++] = current;

if (current == destination) {
return true;
}

for (int i = 0; i < n; i++) {
if (graph[current][i] == 1 && !visited[i]) {
if (dfs(i, destination, n)) {
return true;
}
}}
    pathLen--;
    return false;
}

int main() {
    int n, e;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> e;

    for (int i = 0; i < n; i++) {
visited[i] = false;
for (int j = 0; j < n; j++) {
graph[i][j] = 0;
}
}

cout << "Enter edges (u v) with 0-based indexing: ";
for (int i = 0; i < e; i++) {
int u, v;
cin >> u >> v;
graph[u][v] = 1;
}
int s, d;
cout << "Enter source node: ";
cin >> s;
cout << "Enter destination node: ";
cin >> d;

if (dfs(s, d, n)) {
cout << "Path found: ";
for (int i = 0; i < pathLen; i++) {
cout << path[i] << " ";
}
cout << " ";
} else {
cout << "No path exists from " << s << " to " << d << " ";
}
}

