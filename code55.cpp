#include<bits\stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    d=a+b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    if(c==d){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
