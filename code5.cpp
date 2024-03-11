#include<iostream>
using namespace std;
int main()
{
    int n,k,count=0;
    cin >> n >> k;
    int a[100];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int j=0;j<n;j++){
        if(a[k-1]==0){
            if(a[k-1]<a[j]){
            count++;
        }
        }
        else if(a[k-1]>0){
            if(a[k-1]<=a[j]){
            count++;
        }
        }
        
    }
    cout << count;
}