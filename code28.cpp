#include <bits\stdc++.h>
using namespace std;
bool boom(int n) {
    while (n > 0) {
        int m = n % 10;
        if (m != 4 && m != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && boom(i)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
