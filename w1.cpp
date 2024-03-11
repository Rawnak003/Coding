#include<bits\stdc++.h>
using namespace std;
#define long long ll
#define V 4
#define INF 999999

void print(int D[][V]){
    cout << "Result:" << endl;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(D[i][j] == INF){
                cout << "INF" << "  ";
            }else{
                cout << D[i][j] << "  ";
            }
        }
        cout << endl;
    }
}

void floydWarshall(int D[][V]){
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(D[i][j] > D[i][k] + D[k][j]){
                    D[i][j] = D[i][k] + D[k][j];
                }
            }
        }
    }
    print(D);
}

int main(){
    int graph[V][V] = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
    floydWarshall(graph);
    return 0;
}