#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a[4],c=0;
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    sort(begin(a), end(a));
    for(int i=0;i<3;i++){
        if(a[i]==a[i+1]){
            c++;
        }
    }
    cout << c;
    return 0;
}