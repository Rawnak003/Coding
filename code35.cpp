#include <bits\stdc++.h>
using namespace std;
int main() {
    int t,k=0;
    string n;
    cin >> t;
    cin >> n;
    for (int i = 1; i < t; i++) {
        string m;
        cin >> m;
        if (m != n) {
            k++;
            n = m;
        }
    }
    cout << k+1;
    return 0;
}
