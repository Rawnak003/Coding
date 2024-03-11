#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void addEdge(vector<vector<int>>& adj, int u, int v){
    adj[u].push_back(v);
}
void bfs(vector<vector<int>>& adj, int start){
    int v=adj.size();
    vector<bool> visited(v,false);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int current = q.front();
        q.pop();
        cout << current << " ";
        for(int n : adj[current]){
            if(!visited[n]){
                visited[n] = true;
                q.push(n);
            }
        }
    }
}
int main()
{
    int V = 6;
    vector<vector<int>> adj(V);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    cout << "BFS starting from vertex 0: ";
    bfs(adj,0);
    return 0;
}