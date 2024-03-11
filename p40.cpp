#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,c1=0,c2=0,c3=0;
        cin >> n;
        string s1[n],s2[n],s3[n];
        for(int i=0;i<n;i++){
            cin >> s1[i];
            cin >> s2[i];
            cin >> s3[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0,k=0;j<n,k<n;j++,k++){
                if(s1[i]==s2[j] && s1[i]!=s3[k]){
                    c1++;
                    c2++;
                }
                else if(s1[i]==s3[k] && s1[i]!=s2[j]){
                    c1++;
                    c3++;
                }
                else if(s2[j]==s3[k] && s2[j]!=s1[i]){
                    c2++;
                    c3++;
                }
                else if(s1[i]!=s3[k] && s1[i]!=s2[j]){
                    c1=c1+3;
                }
                else if(s2[j]!=s3[k] && s2[j]!=s1[i]){
                    c2=c2+3;
                }
                else if(s3[k]!=s1[i] && s3[k]!=s2[j]){
                    c3=c3+3;
                }
            }
        }
        cout << c1 << " " << c2 << " " << c3 << endl;
    }
}