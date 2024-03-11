#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    int d[k];
    for(int i=0; i<k; i++) {
        cin >> d[i];
    }
    int ans = n;
    while(1) {
        int temp = ans;
        int r = 0;
        while(temp > 0) {
            int x = temp % 10;
            for(int i=0; i<k; i++) {
                if(x == d[i]) {
                    r++;
                    break;
                }
            }
            temp /= 10;
        }
        if(r==0) {
            cout << ans << endl;
            break;
        }
        else{
            ans++;
        }
    }
    return 0;
}