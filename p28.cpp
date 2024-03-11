#include<bits\stdc++.h>
using namespace std;
#define n 1000000
int main()
{
    int i,j=0,l=0;
    string a;
    int b[n]={0};
    string s[n];
    cin >> a;
    for(i=0;i<a.length();i++){
        if(a[i]==' '){
            b[j]=i;
            j++;
        }
    }
    for(i=0;i<a.length();i++){
        s[i]=a.substr(l,b[i]);
        l=b[i]+1;
    }
    for(i=0;i<a.length();i++){
        cout << s[i] << endl;
    }
}