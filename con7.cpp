#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,l;
    char c,d;
    string m;
    cin >> t;
    for(int x=0;x<t;x++){
        int count1=0,count2=0;
        cin >> l;
        cin >> m;
        c=m[0];
        d=m[1];
        for(int i=0;i<l-1;i++){
            if(l==1){
                cout << "YES" << endl;
            }
            else{
                if(m[i]==m[i+1]){
                    cout << "NO" << endl;
                }
                else{
                    if(i%2==0){
                        if(m[i]==c){
                            count1++;
                        }
                    }
                    if(i%2!=0){
                        if(m[i]==d){
                            count2++;
                        }
                    }
                    if(i%2==0){
                        if(m[i]==c){
                            
                        }
                    }
                }
            }
        }
    }
}