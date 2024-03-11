#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int a=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==a){
            count++;
        }
    }
    if(count%2==0){
        cout << "Unlucky";
    }else{
        cout << "Lucky";
    }
}