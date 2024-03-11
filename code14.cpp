#include<bits\stdc++.h>
using namespace std;
int main()
{
    int x,count=0;
    cin >> x;
    int a=x/5;
    x=x%5;
    int b=x/4;
    x=x%4;
    int c=x/3;
    x=x%3;
    int d=x/2;
    x=x%2;
    int e=x/1;
    count=a+b+c+d+e;
    cout << count;
    return 0;
}