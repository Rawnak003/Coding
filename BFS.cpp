#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
}

void BFS(vector<vector<int>>& adj, int start) {
    int V = adj.size();
    vector<bool> visited(V, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";
        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main() {
    int V = 6;
    vector<vector<int>> adj(V);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    cout << "BFS starting from vertex 0: ";
    BFS(adj, 0);
    return 0;
}
