#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,c1=0,c2=0;
    cin >> n;
    char m[n];
    for(int i=0;i<n;i++){
        cin >> m[i];
    }
    for(int j=0;j<n;j++){
        if(m[j]=='A'){
            c1++;
        }
        else if(m[j]=='D'){
            c2++;
        }
    }
    if(c1>c2){
        cout << "Anton";
    }
    else if(c1<c2){
        cout << "Danik";
    }
    else{
        cout << "Friendship";
    }
}