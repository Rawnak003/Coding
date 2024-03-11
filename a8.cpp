#include<bits\stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,c,sum=0;
    cin >> a >> b >> c;
    if(a<=b && a<=c){
        cout << a;
    }
    else if(c<=a && c<=b){
        cout << c;
    }
    else {
        sum=b;
        a=a-b;
        c=c-b;
        a=a/2;
        if(a<=c){
            sum=sum+a;
        }
        else{
            sum=sum+c;
        }
        cout << sum;
    }
}