#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=1;j<=n-i;j++){
                cout << " ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout << ">";
            }
            cout << endl;
        }
        else{
            for(int j=1;j<=n-i;j++){
                cout << " ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout << "<";
            }
            cout << endl;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(i%2==0){
            for(int j=1;j<=n-i;j++){
                cout << " ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout << ">";
            }
            cout << endl;
        }
        else{
            for(int j=1;j<=n-i;j++){
                cout << " ";
            }
            for(int j=1;j<=2*i-1;j++){
                cout << "<";
            }
            cout << endl;
        }
    }
    return 0;
}