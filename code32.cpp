#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if(n%2==0){
        cout << n/2;
    }
    else{
        n=(n+1);
        cout << -(n/2);
    }
    return 0;
}