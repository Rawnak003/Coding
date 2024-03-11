#include<bits\stdc++.h>
using namespace std;
int main()
{
    int k,n,w,sum=0;
    cin >> k >> n >> w;
    for(int i=1;i<=w;i++){
        sum=sum+(i*k);
    }
    int s=sum-n;
    if(s>0){
        cout << s;
    }
    else{
        cout << "0";
    }
    return 0;
}