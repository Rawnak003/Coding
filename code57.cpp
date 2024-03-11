#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int c1=0,c2=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                c1=i;
                c2=j;
            }
        }
    }
    c1=abs(c1-2);
    c2=abs(c2-2);
    cout << c1+c2;
    return 0;
}