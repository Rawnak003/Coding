#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
}
void DFS(vector<vector<int>>& adj, int start) {
    int V = adj.size();
    vector<bool> visited(V, false);
    stack<int> s;
    s.push(start);
    while (!s.empty()) {
        int current = s.top();
        s.pop();
        if (!visited[current]) {
            cout << current << " ";
            visited[current] = true;
        }
        for (int neighbor : adj[current]) {
            if (!visited[neighbor]) {
                s.push(neighbor);
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
    cout << "DFS starting from vertex 0: ";
    DFS(adj, 0);
    return 0;
}
