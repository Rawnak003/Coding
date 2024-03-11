#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,n,sum=0,m;
    cin >> a;
    n=a;
    while(n>0)
    {
        m=n%10;
        sum=(sum*10)+m;
        n=n/10;
    }
    cout << sum << endl;
    if(a==sum)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}