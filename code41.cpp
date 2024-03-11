#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,max,min,m1,m2,a,b;
    cin >> n;
    int x[n];
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    max=x[0];
    m1=0;
    min=x[0];
    m2=n-1;
    for(int i=0;i<n;i++){
        if(max<x[i]){
            max=x[i];
            m1=i;
        }
    }
    for(int j=0;j<n;j++){
        if(min>=x[j]){
            min=x[j];
            m2=j;
        }
    }
    if(max==x[0] && min==x[n-1]){
        cout << "0";
    }
    else if(m1<m2){
        a=m1-0;
        b=n-1-m2;
        cout << a+b;
    }
    else if(m1>m2){
        a=m1-0;
        b=n-1-m2;
        cout << (a+b)-1;
    }
    return 0;
}