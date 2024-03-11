#include<bits\stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    char n[100];
    string m,r;
    cin >> m;
    cin >> r;
    int l=m.length();
    for(i=l-1,j=0;i>=0,j<l;i--,j++){
        n[j]=m[i];
    }
    for(i=0;i<l;i++){
        if(n[i]==r[i]){
            k++;
        }
    }
    if(k==l){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}