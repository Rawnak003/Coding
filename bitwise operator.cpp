#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e;
    cout << "Enter two number : ";
    cin >> a >> b;

    c=a&b;
    cout << "Bitwise AND : " << c << endl;
    d=a|b;
    cout << "Bitwise OR : " << d << endl;
    e=a^b;
    cout << "Bitwise X-OR : " << e << endl;

    return 0;
}
