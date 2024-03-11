#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,n,m,i,count;
    cin >> n >> m;
    int arr[n],match[m+1]={0};
    for(i=0;i<n;i++){
        cin >> arr[i];
        count=arr[i];
        if(count>=1 && count<=m){
            match[count]+=1;
        }
    }
    for(a=1;a<=m;a++){
        cout << match[a] << endl;
    }
}