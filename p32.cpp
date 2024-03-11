#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k,j;
        cin >> n >> k;
        int arr[k];
        for(j=0;j<k;j++){
            if((1<<j) <= n){
                arr[j]=(1<<j);
            }
            else{
                break;
            }
        }
        for(int i=0;i<j;i++){
            cout << arr[i] << " ";
        }
    }
}