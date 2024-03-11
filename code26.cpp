#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    string m;
    cin >> m;
    int l=m.length();
    for(int i=0;i<l;i=i+2){
        for(int j=i+2;j<l;j=j+2){
            if(m[j]<=m[i]){
                n=m[i];
                m[i]=m[j];
                m[j]=n;
            }
        }
    }
    for(int k=0;k<l;k++){
        cout << m[k];
    }
}