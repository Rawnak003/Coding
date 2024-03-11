#include<bits\stdc++.h>
using namespace std;
int main()
{
    int a,b,c,res=0;
    cin >> a >> b >> c;
    for(int i=0;i<100;i++){
        int d=c-(a*i);
        if(d<0){
            break;
        }
        else if(d%b==0){
            res=1;
        }
    }
    if(!res){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
}