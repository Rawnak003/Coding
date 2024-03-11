#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,a,c1=0,c2=0,c3=0,c4=0;
    cin >> n;
    for(int j=0;j<n;j++){
        cin >> a;
        if(a%2==0){
            c1++;
        }
        if(a%2!=0){
            c2++;
        }
        if(a>0){
            c3++;
        }
        if(a<0){
            c4++;
        }
    }
    cout << "Even: " << c1 << endl;
    cout << "Odd: " << c2 << endl;
    cout << "Positive: " << c3 << endl;
    cout << "Negative: " << c4;
}