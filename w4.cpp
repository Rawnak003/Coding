#include<iostream>
#include<climits>
using namespace std;
struct Edge {
    int src,des,wt;
};

void bellman(Edge edges[],int V, int E){
    int dist[V];
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX;
    }
    dist[0]=0;
    for(int i=1;i<=V-1;i++){
        for(int j=0;j<E;j++){
            int u=edges[j].src;
            int v=edges[j].des;
            int wt=edges[j].wt;
            if(dist[u] != INT_MAX && dist[v] > dist[u]+wt){
                dist[v] = dist[u]+wt;
            }
        }
    }
    for(int j=0;j<E;j++){
        int u=edges[j].src;
        int v=edges[j].des;
        int wt=edges[j].wt;
        if(dist[u] != INT_MAX && dist[v] > dist[u]+wt){
            cout << "It has neg cycle" << endl;
            return;
        }
    }
    cout << "src-->des \t distance" << endl;
    for(int i=0;i<V;i++){
        cout << "0-->"<< i << "\t\t" << dist[i] << endl;
    }
}

int main()
{
    int V,E;
    cout << "Enter vertex no:";
    cin >> V;
    cout << "Enter edge no:";
    cin >> E;
    
    Edge edges[E];
    for(int i=0;i<E;i++){
        cin >> edges[i].src >> edges[i].des >> edges[i].wt;
    }
    bellman(edges,V,E);
    return 0;
}