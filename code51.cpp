#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    char a;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a;
        if(a=='c'||a=='o'||a=='d'||a=='e'||a=='f'||a=='r'||a=='e'||a=='s'){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    } 
    return 0;
}