#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,k=0;
        cin >> n;
        char s[n+1]={'\0'},f[n];
        for(int i=0;i<n;i++){
            cin >> s[i];
        }
        char temp=s[0];
        for(int i=1;i<n;i++){
            if(temp==s[i]){
                f[k]=temp;
                temp=s[i+1];
                i++;
                k++;

            }
        }
        for(int i=0;i<k;i++){
            cout << f[i];
        }
        cout << endl;
    }
}