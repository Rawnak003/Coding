#include<bits\stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int size = trunc(log10(a));
    int b=pow(10,size);
    a=a/b;
    if(a%2==0){
        cout << "EVEN";
    }
    else{
        cout << "ODD";
    }
    return 0;
}