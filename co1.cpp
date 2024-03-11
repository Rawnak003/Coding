#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    unsigned long long res=0,n,sum=0;
    cin >> t;
    for(int j=1;j<=t;j++){
        cin >> n;
        res=4*n;
        n=n-1;
        sum=(n*(n+1))/2;
        sum=(sum*2)-(n-1);
        res=res+sum;
        if(j==t){
            cout << res;
        } else{
            cout << res << endl;
        }
        res=0;
        sum=0;
    }
}