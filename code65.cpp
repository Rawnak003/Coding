#include <bits\stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    long long time = 0;
    int current = 1;
    for (int i = 0; i < m; i++) {
        if (a[i] >= current) {
            time += a[i] - current;
        } else {
            time += n - current + a[i];
        }
        current = a[i];
    }
    cout << time << endl;
    return 0;
}
