#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    long double r=(100.00*b)/a;
    long double res=100.00-r;
    cout << fixed << res;
    return 0;
}