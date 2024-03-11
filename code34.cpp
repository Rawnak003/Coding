#include<bits\stdc++.h>
using namespace std;
int main()
{
    string m,n;
    cin >> n >> m;
    int l=m.length();
    for(int i=0;i<l;i++){
        if(n[i]==m[i]){
            n[i]='0';
        }
        else{
            n[i]='1';
        }
    }
    cout << n;
    return 0;
}
