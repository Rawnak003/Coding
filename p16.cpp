#include<bits\stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin >> a;
    b=sqrt(a);
    if(a<12){
        for(int i=2;i<a;i++){
            if(a%i==0){
                count++;
                break;
            }
        }
    }
    else if(a>=12){
        for(int i=2;i<=b;i++){
            if(a%i==0){
                count++;
                break;
            }
        }
    }
 
 
    if(count==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}