#include<bits\stdc++.h>
#include<string.h>
using namespace std;
typedef long long ll;
int main() {
    ll i,n,arr[26]={0};
    cin >> n;
    char c;
    for(i=0;i<n;i++){
        cin >> c;
        arr[(int)c-97]++;
    }
    for(i=0;i<26;i++){
        while(arr[i]!=0){
            cout << ((char)(i+97));
            arr[i]--;
        }
    }
    return 0;
}
