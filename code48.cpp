#include<bits\stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,sum=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a[0]=='T'){
            sum=sum+4;
        }
        else if(a[0]=='C'){
            sum=sum+6;
        }
        else if(a[0]=='O'){
            sum=sum+8;
        }
        else if(a[0]=='D'){
            sum=sum+12;
        }
        else if(a[0]=='I'){
            sum=sum+20;
        }
    }
    cout << sum;
    return 0;
}