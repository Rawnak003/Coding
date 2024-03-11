#include<bits\stdc++.h>
using namespace std;
int main()
{
    string n;
    int i=0;
    while(cin >> n){
        reverse(n.begin(),n.end());
        if(i!=0){
            cout << " ";
        }
        i=1;
        cout << n;
    }
}