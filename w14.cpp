#include<iostream>
#include<climits>
using namespace std;
struct Edge {
    int src,des,wt;
};

void bellmanFord(Edge edges[],int V, int E){
    int dis[V];
    for(int i=0;i<V;i++){
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    for(int i=1;i<V-1;i++){
        for(int j=0;j<E;j++){
            int u=edges[j].src;
            int v=edges[j].des;
            int wt=edges[j].wt;
            if(dis[u] != INT_MAX && dis[v] > dis[u] + wt){
                dis[v] = dis[u] + wt;
            }
        }
    }
    for(int j=0;j<E;j++){
        int u=edges[j].src;
        int v=edges[j].des;
        int wt=edges[j].wt;
        if(dis[u] != INT_MAX && dis[v] > dis[u] + wt){
            cout << "it has ne cycle";
            return;
        }
    }
    cout << "src-->des \t distance"<<endl;
    for(int i=0;i<V;i++){
        cout<<"-->"<<i<<"\t\t"<<dis[i]<<endl;
    }
}

int main()
{
    int v,e;
    cout << "Enter vertex no:";
    cin >> v;
    cout << "Enter edge no:";
    cin >> e;
    Edge edges[e];
    for(int i=0;i<e;i++){
        cin >> edges[i].src >> edges[i].des >> edges[i].wt;
    }
    bellmanFord(edges,v,e);
    return 0;
}