#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,e;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b >> c;
        d=a+b;
        e=a-b;
        if(d==c){
            cout << "+" << endl;
        }
        else if(e==c){
            cout << "-" << endl;
        }
    }
    return 0;
}