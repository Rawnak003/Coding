#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a;
    b=a%10;
    a=a/10;
    if(a>=b){
        if(b==0){
            cout << "YES";
        }
        else if(a%b==0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else if(b>=a){
        if(a==0){
            cout << "YES";
        }
        else if(b%a==0){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
}