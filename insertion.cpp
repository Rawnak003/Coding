#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int j=1;j<n;j++){
        key=arr[j];
        int k=j-1;
        while(k>=0 && arr[k]>key){
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=key;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}