#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,n[4],b,c,d;
    cin >> a;
    for(int x=a+1;x<=9012;x++){
        d=x;
        for(int i=3;i>=0;i--){
            b=d%10;
            n[i]=b;
            d=d/10;
        }
        if(n[0]!=n[1] && n[0]!=n[2] && n[0]!=n[3] && n[1]!=n[2] && n[1]!=n[3] && n[2]!=n[3]){
            c=x;
            break;
        }
    }
    cout << c;
    return 0;
}