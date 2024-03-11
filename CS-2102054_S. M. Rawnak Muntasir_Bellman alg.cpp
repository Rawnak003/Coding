#include <iostream>
#include <climits>
using namespace std;

struct Edge {
    int src, dest, weight;
};
int solve(int H, int i,int E,Edge edges[]);

void bellmanFord(Edge edges[], int V, int E) {

    int dist[V];
    int parent[V];
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        parent[i] = -1;
    }
    dist[0] = 0;
    for (int i = 1; i <= V-1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].src;
            int v = edges[j].dest;
            int weight = edges[j].weight;
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                parent[v] = u;
            }
        }
    }
    for (int i = 0; i < E; i++) {
        int u = edges[i].src;
        int v = edges[i].dest;
        int weight = edges[i].weight;
        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            cout << "Graph contains a negative weight cycle." << endl;
            return;
        }
    }
    cout << "Vertex \t Distance"<< endl;
    for (int i = 0; i < V; i++) {
        cout << i << " \t " << dist[i] << endl;
    }
    cout << "paths: " << endl;
    for(int i=1;i<V;i++){
        int H=parent[i];
        int res=solve(H,i,e,edges);
        cout << "U-->V: " << H << "-->" << i << " & wt=" << res << endl;
    }
}
int solve(int H, int i,int E,Edge edges[]){
    int R;
    for(int j=0;j<E;j++){
        if(H==edges[j].src && i==edges[j].dest){
            R = edges[j].weight;
        }
    }
    return R;
}
int main() {
    
    int V, E;
    cout << "Enter the number of vertices (V): ";
    cin >> V;
    cout << "Enter the number of edges (E): ";
    cin >> E;
    Edge edges[E];
    for (int i = 0; i < E; i++) {
        cout << "Enter edge " << i << " (source, destination, weight): ";
        cin >> edges[i].src >> edges[i].dest >> edges[i].weight;
    }
    bellmanFord(edges, V, E);
    return 0;
}
