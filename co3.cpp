#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll q;
    cin >> q;
 
    while (q--) {
        ll n;
        cin >> n ;
 
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
    sort(a,a+n);
      if(a[n-1]*a[n-2] > a[0]*a[1])
        cout <<a[n-1]*a[n-2]<< endl;
    else 
        cout <<a[0]*a[1]<< endl;
    }
 
    return 0;
}