#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
bool st[N];
int main(){
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	for(int i=k;i<=d;i+=k) st[i]=true;
	for(int i=l;i<=d;i+=l) st[i]=true;
	for(int i=m;i<=d;i+=m) st[i]=true;
	for(int i=n;i<=d;i+=n) st[i]=true;
	int ans=0;
	for(int i=1;i<=d;i++)
		if(st[i]) ans++;
	cout<<ans;
	return 0;
}