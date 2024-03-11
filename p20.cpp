#include<iostream>
using namespace std;
int main ()
{
    long long t,j,l,r,temp,res;
    cin >> t;
    for(j=0;j<t;j++){
        cin >> l >> r;
        temp=abs(l-r)+1;
        res=(temp*(l+r))/2;
        cout << res << endl;
    }
}