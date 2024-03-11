#include<bits\stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        k=min(k,(ll)61);
        if((n+1)<(1ll<<k)){
            cout << (n+1) << endl;
        }
        else{
            cout << (1ll<<k) << endl;
        }
    }
}