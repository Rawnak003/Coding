#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,count=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a >> b >> c;
        int r=a+b+c;
        if(r>1 && r<4){
            count++;
        }
    }
    cout << count;
}