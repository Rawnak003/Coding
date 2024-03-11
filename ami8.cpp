#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b;
    float res;
    cin >> a >> b;
    res=(float)a/b;
    cout << "floor " << a << " / " << b << " = " << floor(res) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(res) << endl;
    cout << "round " << a << " / " << b << " = " << round(res);
}   