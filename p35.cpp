#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,k,M;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<=n-k;i++){
        M=INT_MIN;
        for(int j=i;j<i+k;j++){
            M=max(M,arr[j]);
        }
        cout << M << " ";
    }
}