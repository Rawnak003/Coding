#include<bits\stdc++.h>
using namespace std;
int main()
{
    int t,a,b,r,y;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b;
        if(a%b==0){
            cout << "0" << endl;
        }
        else{
            r=a/b;
            r=r+1;
            y=b*r;
            cout << y-a << endl;
        }
    }
    return 0;
}