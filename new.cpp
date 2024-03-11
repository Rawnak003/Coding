#include<bits\stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a,b,c,d,e,f,l1=0,l2=0;
    cin >> a >> b >> c >> d;
    if(b==d){
        if(a>c){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else if(b>d){
        if(a>c){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else if(b<d){
        if(a>c){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
}