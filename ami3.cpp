#include<bits\stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    unsigned long long z=(long long)x*(long long)y;
    cout << x << " + " << y << " = " << x+y << endl;
    cout << x << " * " << y << " = " << z << endl;
    cout << x << " - " << y << " = " << x-y << endl;
    return 0;
}