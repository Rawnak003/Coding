#include<bits\stdc++.h>
using namespace std;
int main()
{
    int k,n,count=1,a,r=1;
    cin >> k >> n;
    while(r!=0){
        a=k*count;
        if(a%10==0){
            cout << count;
            return 0;
        }
        else if((a-n)%10==0){
            cout << count;
            return 0;
        }
        else{
            count++;
        }
    }
}