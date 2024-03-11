#include<bits\stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int t,n,count=0;
    string a;
    string m;
    cin >> t;
    for(int j=0;j<t;j++){
        cin >> n >> a;
        //for(int k=0;k<n;k++){
            cin >> m;
        //}
        for(int i=0;i<n-1;i++){
            if((int)a>m[i]){
                count=1;
                m.insert(i, a);
            }
        }
        if(count==0 && m[0]<a){
            m[n]=a;
        }
        else if(count==0 && m[0]>=a){
            int y=n-1;
            while(y>=0){
                m[y+1]=m[y];
                y--;
            }
            m[0]=a;
        }
        //for(int k=0;k<n+1;k++){
            cout << m;
        //}
        cout << "\n";
        count=0;
    }
}