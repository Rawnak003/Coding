#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    char m[n],g;
    for(int j=0;j<n;j++){
        cin >> m[j];
    }
    for(int k=0;k<t;k++){
        for(int i=0;i<n-1;i++){
            if(m[i]=='B' && m[i+1]=='G'){
                g=m[i];
                m[i]=m[i+1];
                m[i+1]=g;
                i++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << m[i];
    }
    return 0;
}