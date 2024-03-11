#include<iostream>
using namespace std;
int main()
{
    int a,b,c,count=0;
    cin >> a >> b >> c;
    int d=c/a;
    int e=c/b;
    for(int i=0;i<=d;i++){
        for(int j=0;j<=e;j++){
            if((a*i + b*j)==c){
                count++;
            }
        }
    }
    if(count==0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
}