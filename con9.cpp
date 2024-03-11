#include <bits/stdc++.h>
using namespace std;

#define int long long


int solve() {
    int t, n, m, i1, j1, i2, j2;
    string d;
    int x = abs(i2-i1), y = abs(j2-j1);
    if (x % 2 != y % 2) return -1; // cannot reach
    int ans = x;
    if (d[0] == 'U') ans += (i1-1);
    else ans += (n-i1);
    if (d[1] == 'L') ans += (j1-1);
    else ans += (m-j1);
    ans += (x+y)/2;
    return ans;
}

signed main() {
    int t, n, m, i1, j1, i2, j2;
    string d;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;
        cout << solve() << "\n";
    }
    return 0;
}
