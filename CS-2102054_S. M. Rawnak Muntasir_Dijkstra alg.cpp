#include<bits\stdc++.h>
using namespace std;
#define long long ll
const int v=5;
const int N=INT_MAX;

int miniValue(int value[v], int visited[v]){
    int min=N;
    int res;
    for(int i=0;i<v;i++){
        if(visited[i]==0 && value[i]<min){
            res = i;
            min = value[i];
        }
    }
    return res;
}
void solve(int G[v][v]){
    int parent[v];
    int value[v];
    int visited[v];
    for(int k=0;k<v;k++){
        value[k]=N;
        parent[k]=-1;
        visited[k]=0;
    } 
    value[0]=0;
    
    for(int j=0;j<v-1;j++){
        int m = miniValue(value,visited);
        visited[m]=1;
        for(int i=0;i<v;i++){
            if(G[m][i]!=0 && visited[i]==0 && value[m]!=N
            && (value[m]+G[m][i] < value[i])){
                value[i]=value[m]+G[m][i];
                parent[i]=m;
            }
        }
    }
    cout << "values: " << endl;
    for(int i=1;i<v;i++){
        cout << "0-->"<< i << " : "<< value[i] << endl; 
    }
    cout << "paths: " << endl;
    for(int i=1;i<v;i++){
        cout << "U-->V: " << parent[i] << "-->" << i << " & wt=" << G[parent[i]][i] << endl;
    }
}
int main(){
    int G[v][v]={
        {0, 10, 0, 0, 5},
        {0, 0, 1, 0, 2},
        {0, 0, 0, 4, 0},
        {7, 0, 6, 0, 0},
        {0, 3, 9, 2, 0}        
    };
    
    solve(G);
    return 0;
}