#include<bits\stdc++.h>
using namespace std;
int main()
{
    char n[50];
    int m,count=0;
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> n[i];
    }
    for(int j=0;j<m-1;j++){
        if(n[j]==n[j+1]){
            count++;
        }
    }
    cout << count;
    return 0;
}