#include<bits\stdc++.h>
using namespace std;
#define v 7
int smv(int value[], bool setMST[]) {
    int min = INT_MAX;
    int vertex;
    for (int i = 0; i < v; i++) {
        if (!setMST[i] && value[i] < min) {
            vertex = i;
            min = value[i];
        }
    }
    return vertex;
}
void findMST(int arr[v][v]) {
    int parent[v] = {};
    int value[v];
    bool setMST[v];
    for (int i = 0; i < v; i++) {
        value[i] = INT_MAX;
        setMST[i] = false;
    }
    value[0] = 0;
    parent[0] = -1;
    for (int i = 0; i < v - 1; i++) {
        int a = smv(value, setMST);
        setMST[a] = true;
        for (int j = 0; j < v; j++) {
            if (arr[a][j] != 0 && !setMST[j] && arr[a][j] < value[j]) {
                value[j] = arr[a][j];
                parent[j] = a;
            }
        }
    }
    for (int i = 1; i < v; i++) {
        cout << (char)(parent[i]+97) << "-->" << (char)(i+97) << " = " << arr[parent[i]][i] << endl;
    }
}
int main() {
    int arr[v][v] = {
        {0, 4, 8, 0, 0, 0, 0},
        {4, 0, 9, 8, 10, 0, 0},
        {8, 9, 0, 2, 0, 1, 0},
        {0, 8, 2, 0, 7, 9, 0},
        {0, 10, 0, 7, 0, 5, 6},
        {0, 0, 1, 9, 5, 0, 2},
        {0, 0, 0, 0, 6, 2, 0},
    };
    findMST(arr);
    return 0;
}