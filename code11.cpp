#include<bits\stdc++.h>
#include<string>
using namespace std;
int main()
{
    int i,j;
    string str,str1="";
    getline(cin, str);
    sort(str.begin(), str.end());
    for(i=0;i<str.length();i++){
        for(j=0;j<str.length();j++){
            if(str[i]==str[j]){
                break;
            }
        }
        if(i==j){
             str1+=str[i];
        }
    }
    int m=str1.length();
    if(m%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";

    }
    return 0;
}