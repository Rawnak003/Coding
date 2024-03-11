#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,k;
    long long int sum=0;
    cin >> n >> k;
    
    long long arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    for(int j=n-1;j>=(n-k);j--){
        if(arr[j] >= 0){
            sum=sum+arr[j];
        }
    }
    cout << sum;
}