#include<bits\stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string a,b;
    int l=s.length();
    int hl=l/2;
    if(l%2==0){
        a=s.substr(0,hl);
        b=s.substr(hl);
    }
    else{
        a=s.substr(0,hl);
        b=s.substr(hl+1);
    }
    reverse(b.begin(), b.end());
    if(a==b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}