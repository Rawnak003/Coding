#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,a,b,j,k,r,q;
    cin >> n;
    cin >> a;
    int arr[200];
    for(j=0;j<a;j++){
        cin >> arr[j];
    }
    cin >> b;
    for(k=0;k<b;k++){
        cin >> r;
        arr[j]=r;
        j++;
    }
    q=a+b;
    for(int x=0;x<q;x++) {
        for(int y=x+1;y<q;y++) {
            if(arr[x]==arr[y]) {
                for(int z=y;z<q-1;z++) {
                    arr[z]=arr[z+1];
                }
                q--;
                y--;
            }
        }
    }
    if(q==n){
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}