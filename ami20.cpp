#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,max,min,mid;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        max=a;
        if(b>c){
            min=c;
            mid=b;
        }
        else{
            min=b;
            mid=c;
        }
    }
    else if(b>=a && b>=c){
        max=b;
        if(a>c){
            min=c;
            mid=a;
        }
        else{
            min=a;
            mid=c;
        }
    }
    else if(c>=a && c>=b){
        max=c;
        if(b>a){
            min=a;
            mid=b;
        }
        else{
            min=b;
            mid=a;
        }
    }
    cout << min << endl;
    cout << mid << endl;
    cout << max << endl << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c;
}