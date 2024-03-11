#include<bits\stdc++.h>
using namespace std;
#define long long ll
int main(){
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    int min=a[0],max=a[0],count=0;
    for(i=1;i<n;i++){
        if(a[i]>min){
            count++;
            min=a[i];
        }
        if(a[i]<max){
            count++;
            max=a[i];
        }
    }
    cout << count << endl;
    return 0;
}