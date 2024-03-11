#include<bits\stdc++.h>
using namespace std;
#define v 6

int smv(vector<int>& value,vector<bool>& setMST){
    int min=INT_MAX;
    int vertex;
    for(int i=0;i<v;i++){
        if(setMST[i]==false && value[i]<min){
            vertex=i;
            min = value[i];
        }
    }
    return vertex;
}
void findMST(int arr[v][v]){
    int parent[v]={};
    vector<int>value(v,INT_MAX);
    vector<bool>setMST(v,false);
    value[0]=0;
    parent[0]=-1;
    for(int i=0;i<v-1;i++){
        int a = smv(value,setMST);
        setMST[a]=true;
        for(int j=0;j<v;j++){
            if(arr[a][j]!=0 && setMST[j]==false && arr[a][j]<value[j]){
                value[j]=arr[a][j];
                parent[j]=a;
            }
        }
    }
    for(int i=1;i<v;i++){
        cout << parent[i] << "-->" << i << " = " << arr[parent[i]][i] << endl;
    }
}
int main()
{
    int arr[v][v] ={{0,4,6,0,0,0},
                    {4,0,6,3,4,0},
                    {6,6,0,1,0,0},
                    {0,3,1,0,2,3},
                    {0,4,0,2,0,7},
                    {0,0,0,3,7,0}};
    findMST(arr);
    return 0;
}