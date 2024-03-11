#include<bits\stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin >> a;
    for(int i=2;i<=a;i++){
        b=sqrt(i);
        for(int j=2;j<=b;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            cout << i << " ";
        }
        count=0;
    }
}