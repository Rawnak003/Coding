#include<bits\stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    double d;
    cin >> n >> d;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    cout << "Yes" << endl;
    for(int i=0;i<n-1;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            int p=abs(a[j]-a[i]);
            int q=abs(b[j]-b[i]);
            double r=sqrt((p*p)+(q*q));
            if(r<d){
                count++;
                break;
            }
        }
        //if(i==n-1)
        if(count==0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}