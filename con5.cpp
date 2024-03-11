#include<bits\stdc++.h>
using namespace std;
int main(){
    int t,n,a;
    cin >> t;
    for(int i=0;i<t;i++){
        int s1=0,s2=0;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> a;
            if(a%2==0){
                s1+=a;
            }
            else{
                s2+=a;
            }
        }
        if(s1>s2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}