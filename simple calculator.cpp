#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    float a,b;

    cout << "Enter your problem : ";
    cin >> a >> c >> b;

    switch(c)
    {
    case '+':
    {
        float res = a + b;
        cout << fixed << setprecision(3) << "The result : " << res << endl;
        break;
    }
    case '-':
    {
        float res = a - b;
        cout << fixed << setprecision(3) << "The result : " << res << endl;
        break;
    }
    case '*':
    {
        float res = a * b;
        cout << fixed << setprecision(3) << "The result : " << res << endl;
        break;
    }
    case '/':
    {
        float res = a / b;
        cout << fixed << setprecision(3) << "The result : " << res << endl;
        int rem = (int) a % (int) b;
        cout << "The reminder : " << rem << endl;
        break;
    }
    }
    return 0;
}

