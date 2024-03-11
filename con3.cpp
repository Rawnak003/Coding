#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
		int n,m;
		cin>>n>>m;
		if(n==m){
			cout<<"YES"<<endl;
			return;
		}
		
		int t = __gcd(m,n);
		m /= t;
		n /= t;
		// cout<<m<<n<<endl;
		int k1=0,k2=0;
		
		while(n%3== 0){
			k1++;
			n/=3;
		}
		while(m%2== 0){
			k2++;
			m/=2;
		}
		if(n==1 && m==1 && k2<=k1){
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
}
int32_t main ()
{
	int it;
	cin>>it;
	while(it--){
		solve();
	}
}