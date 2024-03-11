#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,m,r=1;
    cin >> n >> m;
    char a[n][m];
    for(int i=0;i<n;i++){
        if(i%2!=0){
            if(i/(4*r-1)==1){
                r++;
                a[i][0]='#';
                for(int k=1;k<m;k++){
                    a[i][k]='.';
                }
            }
            else{
                a[i][m-1]='#';
                for(int k=0;k<m-1;k++){
                    a[i][k]='.';
                }
            }
        }
        else{
            for(int j=0;j<m;j++){
                a[i][j]='#';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j];
        }
        cout << "\n";
    }
}