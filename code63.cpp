#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b;
    if(a>b){
        c=b;
        d=a-b;
    }
    else if(a<b){
        c=a;
        d=b-a;
    }
    else{
        c=a;
    }
    cout << c << " " << d/2;
}