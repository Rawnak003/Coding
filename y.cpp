#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> glasses(n);
        for (int i = 0; i < n; ++i) {
            cin >> glasses[i];
        }

        long long sum_odd = 0, sum_even = 0, result = 0;

        // Calculate the prefix sums
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                sum_even += glasses[i];
            } else {
                sum_odd += glasses[i];
            }
        }

        long long prefix_odd = 0, prefix_even = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                sum_even -= glasses[i];
            } else {
                sum_odd -= glasses[i];
            }

            if (prefix_odd + sum_even == prefix_even + sum_odd) {
                result = 1;
                break;
            }

            if (i % 2 == 0) {
                prefix_even += glasses[i];
            } else {
                prefix_odd += glasses[i];
            }
        }

        // Output the result
        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
