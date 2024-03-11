#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b;
    c=abs(a-b);
    if(a!=0 && b!=0){
        if(c==1 || c==0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }
    return 0;
}