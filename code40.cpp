#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s[4];
    cin >> a >> b >> c;
    s[0]=a+b*c;
    s[1]=a*(b+c);
    s[2]=a*b*c;
    s[3]=((a+b)*c);
    s[4]=a+b+c;
    sort(s,s+5);

    cout << s[4];
}