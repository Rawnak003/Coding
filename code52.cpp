#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t,n;
    char a;
    cin >> t;
    for(int i=0;i<t;i++){
        int count=0,s1=0,s2=0;
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> a;
            if(a=='U'){
                s1=s1+1;
            }
            else if(a=='D'){
                s1=s1-1;
            }
            else if(a=='R'){
                s2=s2+1;
            }
            else if(a=='L'){
                s2=s2-1;
            }
            if(s1==1 && s2==1){
                count++;
            }
        }
        if(count==0){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
