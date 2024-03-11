#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,m,dif=0,min=0;
    cin >> n >> m;
    int a[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    sort(a, a+m);
    min=a[n-1]-a[0];
    for(int i=0;i<=m-n;i++){
        dif=a[i+n-1]-a[i];
        if(dif<min){
            min=dif;
        }
    }
    cout << min;
    return 0;
}