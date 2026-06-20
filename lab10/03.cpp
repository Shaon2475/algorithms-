#include <iostream>
using namespace std;

const int MAX = 100;
int graph[MAX][MAX];
bool visited[MAX];
int parent[MAX];
bool dfs(int current, int destination, int n) {
    visited[current] = true;

    if (current == destination)
        return true;

    for (int i = 0; i < n; i++) {
        if (graph[current][i] == 1 && !visited[i]) {
            parent[i] = current;
            if (dfs(i, destination, n))
                return true;
        }
    }
    return false;
}
void printPath(int source, int destination) {
    int path[MAX];
    int length = 0;
    int current = destination;

    while (current != -1) {
        path[length++] = current;
        current = parent[current];
    }

    cout << "Path: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << path[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
    int source = 0, destination = 3;

    graph[0][1] = graph[1][0] = 1;
    graph[0][2] = graph[2][0] = 1;
    graph[1][3] = graph[3][1] = 1;
    graph[2][3] = graph[3][2] = 1;
    graph[3][4] = graph[4][3] = 1;
    graph[4][5] = graph[5][4] = 1;
    for (int i = 0; i < n; i++)
        parent[i] = -1;

    if (dfs(source, destination, n)) {
        printPath(source, destination);
    } else {
        cout << "No path found from " << source << " to " << destination << endl;
    }

    return 0;
}
