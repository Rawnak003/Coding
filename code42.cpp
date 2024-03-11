#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,a,sum1=0,sum2=0,r=0,p=0,q,t;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a==4){
            r++;//r=1
        }
        else if(a==3){
            p++;//p=1
        }
        else if(a==2){
            sum1=sum1+a;
        }
        else if(a==1){
            sum2=sum2+a;
        }
    }
    if(sum1%4==0){
        q=sum1/4;//q=1
        t=sum2-p;
        if(t>0){
            if(t%4==0){
            t=t/4;
        }
        else {
            t=(t/4)+1;
        }
        }
        else {
            t=0;
        }
    }
    else {
        q=(sum1/4)+1;
        t=sum2-p-2;
        if(t>0){
            if(t%4==0){
            t=t/4;
        }
        else {
            t=(t/4)+1;
        }
        }
        else{
            t=0;
        }
    }
    cout << r+p+q+t;
    return 0;
}