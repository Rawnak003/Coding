#include<bits\stdc++.h>
using namespace std;
#define long long ll
#define INF 999999 
#define v 4

void print(int a[][v]){
    cout << "result : " << endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(a[i][j] == INF){
                cout << "INF" << "  ";
            }else{
                cout << a[i][j] << "  ";
            }
        }
        cout << endl;
    }
}

void floydWarshall(int a[][v]){
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(a[i][j] > a[i][k] + a[k][j]){
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }
    print(a);
}

int main(){
    int graph[v][v] = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
    floydWarshall(graph);
    return 0;
}