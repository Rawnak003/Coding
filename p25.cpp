#include<bits\stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j;
    cin >> n;
    ll arr[n],temp[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0,j=0;j<(n/2)+1;i=i+2,j++){
        temp[i]=arr[j];
        temp[i+1]=arr[n-j-1];
    }
    for(i=0;i<n;i++){
        cout << temp[i] << " ";
    }
}