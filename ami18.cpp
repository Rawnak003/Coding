#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,y,m;
    cin >> a;
    y=a/365;
    a=a%365;
    m=a/30;
    a=a%30;
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << a << " days";
}