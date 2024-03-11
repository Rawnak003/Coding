#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,i=0,j=0;
    cin >> a >> b;
    while(i<10){
        a=a*3;
        b=b*2;
        if(a>b){
            break;
        }
        j++;
        i++;
    }
    cout << j+1;
    return 0;
}