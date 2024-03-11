#include<bits\stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n,cnt=0,s1=0,nt1=1,nt2=1;
        
        string s,r,u;
        cin >> n;
        cin >> s;
        r=s;
        u=s;
        if(n<2){
            cnt=1;
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(s[i]==s[j]){
                        s1=1;
                        break;
                    }
                }
            }
            if(s1==0){
                cnt=1;
            }
            else if(s1==1){
                for(int j=0;j<n;j++){
                    if(r[j]==r[0]){
                        r[j]='1';
                    }
                    else{
                        r[j]='0';
                    }
                }
                for(int k=0;k<n;k++){
                    if(u[k]==u[1]){
                        u[k]='1';
                    }
                    else{
                        u[k]='0';
                    }
                }
                for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++){
                        if(r[i]==r[j]){
                            nt1=0;
                            break;
                        }
                    }
                }
                for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++){
                        if(u[i]==u[j]){
                            nt2=0;
                            break;
                        }
                    }
                }
            }
        }
        if(cnt==1 || (nt1==1 && nt2==0) || (nt1==0 && nt2==1)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
return 0;
}
