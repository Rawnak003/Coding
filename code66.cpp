#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,k,count=0,sum=0,a;
    cin >> n >> k;
    a=240-k;
    for(int i=1;i<=n;i++){
        sum=sum+(5*i);
        if(sum<=a){
            count++;
        }
    }
    cout << count;
}