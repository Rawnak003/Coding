#include<iostream>
using namespace std;
int main()
{
    long long int a=0,b,n,k,i,j,count=0,m;
    cin >> n >> k;
    long long int arr[n],mini[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    b=k;
    for(j=1;j<=(n/k);j++){
        m=arr[a];
        for(i=a;i<b;i++){
            m =min (arr[i],m);
        }
        mini[count]=m;
        count++;
        a=a+k;
        b=b+k;
    }
    if(n%k!=0){
        m=arr[a];
        for(i=a;i<n;i++){
            m =min (arr[i],m);   
        }
        mini[count]=m;
            count++;
    }
    for(i=0;i<count;i++){
        cout << mini[i] << " ";
    }
}