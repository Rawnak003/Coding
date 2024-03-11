#include<bits\stdc++.h>
using namespace std;

void rec(int a){
    if(a==0){
        return;
    }
    else{
        rec(a-1);
    }
    cout << a << " ";
}
int main()
{
    int n=4;
    rec(4);
    return 0;
}