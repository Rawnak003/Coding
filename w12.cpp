#include<bits\stdc++.h>
using namespace std;
#define long long ll

void lcs(string a, string b, int m, int n){
    int T[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0){
                T[i][j]=0;
            }else if(a[i-1] == b[j-1]){
                T[i][j]=T[i-1][j-1] + 1;
            }else{
                T[i][j] = max(T[i-1][j],T[i][j-1]);
            }
        }
    }
    int index = T[m][n];
    char l[index+1];
    l[index]='\0';
    int i=m,j=n;
    while(i>0 && j>0){
        if(a[i-1] == b[j-1]){
            l[index-1]=a[i-1];
            index--;
            i--;
            j--;
        }else if(T[i-1][j]>T[i][j-1]){
            i--;
        }else{
            j--;
        }
    }
    cout << "LCS: ";
    int z=0;
    while(l[z] != '\0'){
        cout << l[z];
        z++;
    }
}

int main(){
    string a,b;
    cin >> a;
    cin >> b;
    int m=a.length();
    int n=b.length();
    lcs(a,b,m,n);
    return 0;
}