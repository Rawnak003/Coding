#include <bits\stdc++.h>
using namespace std;
int main() {
    string m;
    cin >> m;

    int zeros = 0;
    int ones = 0;

    for (char player : m) {
        if (player == '0') {
            zeros++;
            ones = 0;
        } else {
            ones++;
            zeros = 0;
        }

        if (zeros >= 7 || ones >= 7) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
