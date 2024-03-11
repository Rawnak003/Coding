#include <bits\stdc++.h>
using namespace std;
int main() 
{
    long long n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        int m = n % 10;
        if (m == 4 || m == 7) {
            count++;
        }
        n = n / 10;
    }
    int k = 0;
    while (count > 0) {
        int digit = count % 10;
        if (digit != 4 && digit != 7) {
            cout << "NO" << endl;
            return 0;
        }
        else{
            k++;
            count = count / 10;
        }
    }
    if (k > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
