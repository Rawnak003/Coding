#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    string s;
    cin >> s;
    int len = s.length();
    for(int i=0;i<(len-2);i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
            count++;
        }
    }
    cout << count;
}