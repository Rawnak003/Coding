#include<bits\stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int mini=INT_MAX;
        int n;
        cin >> n;
        int res,arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                res=(arr[i-1])+(arr[j-1])+(j-i);
                mini = min(res,mini);
            }
        }
        cout << mini << endl;
    }
}