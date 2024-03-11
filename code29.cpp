#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long n,k,count=0;
    cin >> n >> k;
    count=(n+1)/2;
    if(k<=count){
        long long s=(k*2)-1;
        cout << s;
    }
    else{
        k=k-count;
        long long p=k*2;
        cout << p;
    }
    return 0;
}