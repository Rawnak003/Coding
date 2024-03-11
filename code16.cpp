#include<bits\stdc++.h>
using namespace std;
int main()
{
    int count1=0,count2=0;
    string m;
    cin >> m;
    int l=m.length();
    for(int i=0;i<l;i++){
        int a=m[i];
        if(a>=65 && a<=90){
            count1++;
        }
        else if(a>=97 && a<=122){
            count2++;
        }
    }
    if(count1>count2){
        transform(m.begin(), m.end(), m.begin(), ::toupper);
        cout << m;
    }
    else{
        transform(m.begin(), m.end(), m.begin(), ::tolower);
        cout << m;
    }
    return 0;
}