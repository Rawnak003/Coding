#include<bits\stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    string m;
    cin >> n;
    for(int i=1;i<=4;i++){
        getline (cin, m);
        int len= m.length();
        if(len>10){
            cout << m[0];
            cout << len-2;
            cout << m[len-1];
        }
        else
            cout << m;
    }
}
