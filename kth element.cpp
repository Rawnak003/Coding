#include<bits\stdc++.h>
using namespace std;
#define long long ll
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int k;
    cout << "Enter position k:";
    cin >> k;
    cout << arr[k-1] << endl;
    return 0;
}