#include<bits\stdc++.h>
using namespace std;
int main()
{
    int i=0,j=0,arr[26]={0};
    string s;
    cin >> s;
    int len = s.length();
    while(i<len){
        arr[(int)s[i]-97]++;
        i++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0){
            cout << (char)(i+97);
            j=1;
            break;
        }    
    }
    if(j==0){
        cout << "None";
    }
}