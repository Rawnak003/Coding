#include<bits\stdc++.h>
using namespace std;

struct node{
    int parent,rank;
};
struct Edge{
    int src,des,wt;
};
vector<node> dsuf;
vector<Edge> mst;

int find(int v){
    if(dsuf[v].parent==-1){
        return v;
    }
    return dsuf[v].parent=find(dsuf[v].parent);
}

void union_op(int fromP, int toP){
    if(dsuf[fromP].rank > dsuf[toP].rank){
        dsuf[toP].parent=fromP;
    }else if(dsuf[fromP].rank < dsuf[toP].rank){
        dsuf[fromP].parent=toP;
    }else{
        dsuf[fromP].parent=toP;
        dsuf[toP].rank+=1;
    }
}

bool comparator(Edge a, Edge b){
    return a.wt < b.wt;
}
void kruskal(vector<Edge>& edge_list,int V,int E){
    sort(edge_list.begin(),edge_list.end(),comparator);
    int i=0,j=0;
    while(i<V-1 && j<E){
        int fromP = find(edge_list[j].src);
        int toP = find(edge_list[j].des);
        if(fromP == toP){
            ++j;
            continue;
        }
        union_op(fromP,toP);
        mst.push_back(edge_list[j]);
        ++i;
    }
}

void print(vector<Edge>& mst){
    for(auto p : mst){
        cout << p.src <<  " " << p.des << " " << p.wt << endl;
    }
}

int main(){
    int V,E;
    cout << "Enter V:";
    cin >> V;
    cout << "Enter E:";
    cin >> E;

    dsuf.resize(V);
    for(int i=0;i<V;i++){
        dsuf[i].parent=-1;
        dsuf[i].rank=0;
    }
    vector<Edge> edge_list;
    Edge temp;
    for(int i=0;i<E;i++){
        cin >> temp.src>>temp.des>>temp.wt;
        edge_list.push_back(temp);
    }
    kruskal(edge_list,V,E);
    print(mst);
}