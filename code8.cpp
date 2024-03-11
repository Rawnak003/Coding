#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string m;
    cin >> m;
    int r=m[0];
    if(r>=97 && r<=122){
        n=(r-32);
    }
    else if(r>=65 && r<=90){
        n=r;
    }
    char c=n;
    m[0]=c;
    cout << m;
}