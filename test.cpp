#include <bits/stdc++.h>
using namespace std;
// I'm trying........still trying....success is not that much easy....
#define pb push_back
#define lol long long
#define M 1000000007
#define mod 1073741824

bool isPrime(lol n)
{

    if (n == 1 || n == 0)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (lol i = 5; i * i <= n; i += 6)
    {

        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    // otherwise, n is prime number.
    return true;
}

void solve()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    lol n;
    cin >> n;
    while (n--)
    {
        lol x;
        cin >> x;

        lol m = sqrt(x);
        if (m * m == x && isPrime(m))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

signed main()
{
    lol t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}