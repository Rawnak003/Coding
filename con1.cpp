#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int j=1;j<=t;j++){
        int n,m,p=0,q=0,r=0,out=0;
        cin >> n;
        int a[n]={0};
        int b[n]={0};
        int c[n]={0};
        string s;
        for(int j=0;j<n;j++){
            cin >> m >> s;
            if(s[0]=='1' && s[1]=='0'){
                a[p]=m;
                ++p;
            }
            else if(s[0]=='0' && s[1]=='1'){
                b[q]=m;
                ++q;
            }
            else if(s[0]=='1' && s[1]=='1'){
                c[r]=m;
                ++r;
            }

        }
        int size1=p;
        int size2=q;
        int size3=r;
        if(size1>0){
            sort(a,a+size1);
        }
        if(size2>0){
            sort(b,b+size2);
        }
        if(size3>0){
            sort(c,c+size3);
        }
        if((size1==0) && (size2==0) && (size3>0)){
            out=c[0];
        }
        else if((size1==0) && (size2>0) && (size3>0)){
            out=c[0];
        }
        else if((size1>0) && (size2==0) && (size3>0)){
            out=c[0];
        }
        else if((size1>0) && (size2>0) && (size3==0)){
            out=a[0]+b[0];
        }
        else if(size1>0 && size2>0 && size3>0){
            if((a[0]+b[0])<c[0]){
                out=a[0]+b[0];
            }else{
                out=c[0];
            }
        }
        else{
            out=-1;
        }
        cout << out << endl;
    }
    return 0;
}