#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,p,q,c=0;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> p >> q;
        if(q-p>=2){
            c++;
        }
    }
    cout << c;
}