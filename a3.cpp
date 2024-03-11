#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        int s,d,k;
        cin >> s >> d >> k;
        int res=(2*s)+(3*d);
        if(res>=(k)){
            cout << "Case #" << i <<": YES\n";
        }else{
            cout << "Case #" << i <<": NO\n";
        }
    }
    
}