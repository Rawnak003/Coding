#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin >> n >> m >> a;
    long long row=ceil((double)n/a);
    long long col=ceil((double)m/a);
    cout << row*col;
    return 0;
}