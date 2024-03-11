#include<bits\stdc++.h>
using namespace std;
int main()
{
    int j=0;
    string n;
    cin >> n;
    int l=n.length();
    for(int i=0;i<l;i++){
        if(n[i]=='H'||n[i]=='Q'||n[i]=='9'){
            j++;
            break;
        }
    }
    if(j!=0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}