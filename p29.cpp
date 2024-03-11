#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T'){
            cout << " ";
            i=i+4;
        }
        else{
            cout << s[i];
        }
    }
}