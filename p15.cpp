#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long t,n,fact=1;
    cin >> t;
    while(t>0){
        cin >> n;
        if(n==0){
            fact=1;
        }
        else{
            for(int i=1;i<=n;i++){
                fact=fact*i;
            }
        }
        cout << fact << endl;
        t--;
        fact=1;
    }
}
