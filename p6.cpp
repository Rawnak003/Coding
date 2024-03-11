#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    int x[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin >> x[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=b-1;j>=0;j--){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}