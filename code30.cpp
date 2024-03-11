#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,n,sum=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a;
        sum=sum+a;
    }
    double r=(double)sum/n;
    cout << fixed << setprecision(12) << r;
}