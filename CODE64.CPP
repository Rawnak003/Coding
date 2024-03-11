#include<bits\stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,n,a,x,count=0;
    int b[10];
    cin >> t;
    for(int j=0;j<t;j++){
        cin >> n;
        int size = trunc(log10(n))+1;
        for(int i=size;i>0;i--){
            a=n%10;
            b[i]=a;
            if(b[i]!=0){
                count++;
                x=(size)-i;
                b[i]=(b[i])*(pow(10, x));
            }
            n=n/10;
        }
        cout << count << endl;
        for(int i=1;i<=size;i++){
            if(b[i]!=0){
                cout << b[i] << " ";
            }
        }
        cout << "\n";
        count=0;
    }
}