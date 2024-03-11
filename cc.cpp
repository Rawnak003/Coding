#include <bits\stdc++.h>
#include <cstring>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;

        char num[n+2];
        cin >> num;

        int max_index = -1;
        for (int i = 0; i < n; i++) {
            if ((d+'0') > num[i]) {
                max_index = i;
                break;
            }
        }

        if (max_index == -1) {
            num[n] = d + '0';
            num[n+1] = '\0';
        } 
        else {
            for (int i = n; i >= max_index; i--) {
                num[i] = num[i-1];
            }
            num[max_index] = d + '0';
            num[n+1] = '\0';
        }

        cout << num << endl;
    }
}