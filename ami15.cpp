#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b;
    long long res;
    char s;
    cin >> a >> s >> b;
    switch(s)
    {
        case '+':
        {
            cout << a+b;
            break;
        }
        case '-':
        {
            cout << a-b;
            break;
        }
        case '*':
        {
            res=a*b;
            cout << res;
            break;
        }
        case '/':
        {
            cout << a/b;
            break;
        }
    }
    return 0;
}