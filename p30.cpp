#include<bits\stdc++.h>
#include<string.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int j=1;j<=t;j++){
        int i,n,arr[26]={0},sum=0;
        cin >> n;
        char c;
        for(i=0;i<n;i++){
            cin >> c;
            arr[(int)c-65]++;
        }
        for(i=0;i<26;i++){
            if(arr[i]!=0){
                arr[i]=arr[i]+1;
            }
            sum=sum+arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}
