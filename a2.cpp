#include <bits\stdc++.h>
using namespace std;
int main() {
    int t,n;
    cin >> t;
    while(t--){
        int pos;
        int max=INT_MIN;
        cin >> n;
        int arr1[n],arr2[n],c[n]={0};
        for(int i=0;i<n;i++){
            cin >> arr1[i] >> arr2[i];
            if(arr1[i]<=10){
                c[i]=arr2[i];
            }
        }
        for(int i=0;i<n;i++){
            if(c[i]>max){
                max=c[i];
                pos=i+1;
            }
        }
        cout << pos << endl;
    }
}
