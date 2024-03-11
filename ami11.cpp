#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,max=0,min=0;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        max=a;
        if(b>c){
            min=c;
        }
        else{
            min=b;
        }
    }
    else if(b>=a && b>=c){
        max=b;
        if(a>c){
            min=c;
        }
        else{
            min=a;
        }
    }
    else if(c>=a && c>=b){
        max=c;
        if(b>a){
            min=a;
        }
        else{
            min=b;
        }
    }
    cout << min << " " << max;
}