#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,temp;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout << arr[n-3] <<" " << arr[n-2] <<" "<< arr[n-1] << endl;
    cout << endl;
}