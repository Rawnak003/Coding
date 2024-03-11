#include <bits\stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int minSum = INT_MAX;
        int minLeft = A[0] + 0; // A[i] + i for the leftmost element

        for (int j = 1; j < N; j++) {
            int currentSum = A[j] - j; // A[j] - j for the rightmost element
            int currentMin = currentSum + minLeft;

            if (currentMin < minSum) {
                minSum = currentMin;
            }

            if (A[j] + j > minLeft) {
                minLeft = A[j] + j;
            }
        }

        cout << minSum;
    }

    return 0;
}
