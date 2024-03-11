#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,count=0,solve=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==-1 && solve==0){
            count++;
        }
        else if(a[i]!=-1){
            solve=solve+a[i];
        }
        else if(a[i]==-1 && solve!=0){
            solve--;
        }    
    }
    cout << count;
}