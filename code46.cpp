#include<bits\stdc++.h>
using namespace std;
int main()
{
    int count=0;
    string a;
    cin >> a;
    int l=a.length();
    for(int i=0;i<l;i++){
        if(a[i]>=65 && a[i]<=90){
            count++;
        }
    }
    if(count == l|| (count == l-1 && a[0]>=97 && a[0]<=122)){
        for(int i=0;i<l;i++){
            if(a[i]>=65 && a[i]<=90){
                a[i]=a[i]+32;
            }
            else if (a[i]>=97 && a[i]<=122){
                a[i]=a[i]-32;
            }
        }
        cout << a;
    }
    else {
        cout << a;
    }
    return 0;
}