#include<bits\stdc++.h>
using namespace std;
int main()
{
    char a,b;
    cin >> a;
    
    if(a>=65 && a<=90){
        b=a+32;
        cout << b;
    }
    else if(a>=97 && a<=122){
        b=a-32;
        cout << b;
    }
}