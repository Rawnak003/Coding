#include<bits\stdc++.h>
using namespace std;
void QuickSort(int arr[], int l, int r){
    if(l<r){
        int pivot=r,Li=0,Ri=0;
        int a[r],b[r];
        for(int i=l;i<r;i++){
            if(arr[i]<arr[pivot]){
                a[Li]=arr[i];
                Li++;
            }
            else{
                b[Ri]=arr[i];
                Ri++;
            }
        }
        QuickSort(a, 0, Li-1);
        QuickSort(b, 0, Ri-1);
        int i;
        for(i=0;i<Li;i++){
            arr[i]=a[i];
        }
        arr[i]=arr[pivot];
        for(int j=0;j<Ri;j++){
            arr[i+j+1]=b[j];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    QuickSort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}