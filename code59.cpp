#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,n,res=0;
    cin >> t;
    for(int j=0;j<t;j++){
        cin >> n;
        if(n%2==0){
            res=(n/2)-1;
        }
        else{
            res=n/2;
        }
        cout << res << endl;
    }
}