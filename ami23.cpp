#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d;
    char c,e;
    cin >> a >> c >> b >> e >> d;
    switch(c){
        case '+':
        {
            if(d==(a+b)){
                cout << "Yes";
            }
            else{
                cout << a+b;
            }
            break;
        }
        case '-':
        {
            if(d==(a-b)){
                cout << "Yes";
            }
            else{
                cout << a-b;
            }
            break;
        }
        case '*':
        {
            if(d==(a*b)){
                cout << "Yes";
            }
            else{
                cout << a*b;
            }
            break;
        }
    }
}