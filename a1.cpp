#include <bits\stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,count=0,m=0;
        cin >> n >> k;
        int a[n],b[n-1];
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            b[i]=(a[i+1]-a[i]);
        }
        for(int i=0;i<n-1;i++){
            if(b[i]<=k){
                count++;
            }
            if(i==(n-2)){
                if(m<count){
                    m=count; 
                }
            }
            else if (b[i]>k){
                if(m<count){
                    m=count; 
                }
                count=0;
            }
        }
        if(m==0){
            cout << n-(count+1) << endl;
        }
        else{
            cout << n-(m+1) << endl;
        }    
    }
}