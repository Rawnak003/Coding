#include <bits\stdc++.h>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 < l2 || r2 < l1) {
        cout << "-1";
    } else {
        int intersection_left = (l1 > l2) ? l1 : l2;
        int intersection_right = (r1 < r2) ? r1 : r2;
        cout << intersection_left << " " << intersection_right;
    }

    return 0;
}
