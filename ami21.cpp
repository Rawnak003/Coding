#include<bits\stdc++.h>
using namespace std;
int main()
{
    float a;
    cin >> a;
    int b = (int)a;
    if((a-b)==0){
        cout << "int " << b;
    }
    else{
        cout << "float " << b << " " << fixed << setprecision(3) << a-b;
    }
}