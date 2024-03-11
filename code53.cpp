#include <bits\stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int a[n];
        long long int sum = 0;
        long long int min_abs = INT_MAX;
        int count_neg = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += abs(a[i]);
            min_abs = min(min_abs, abs(a[i]));
            if (a[i] < 0) {
                count_neg++;
            }
        }
        if (count_neg % 2 == 0) {
            cout << sum << endl;
        } else {
            cout << sum - 2*min_abs << endl;
        }
    }
return 0;
}