#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,sum=0,k=0;
    int arr[1000];
    cin >> a;
    for(int i=0;i<a;i++)
    {
        cin >> b >> c;
        sum=sum-b;
        sum=sum+c;
        arr[k]=sum;
        k++;
    }
    sort(arr,arr+k);
    cout << arr[k-1];
    return 0;
}
