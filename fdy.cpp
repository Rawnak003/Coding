#include<bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int c1=0,c2=0,c3=0;
        char arr[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin >> arr[i][j];
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[i][j]=='A'){
                    c1++;
                }else if(arr[i][j]=='B'){
                    c2++;
                }else if(arr[i][j]=='C'){
                    c3++;
                }
            }
        }
        if(c1==2){
            cout << 'A' << endl;
        }else if(c2==2){
            cout << 'B' << endl;
        }else if(c3==2){
            cout << 'C' << endl;
        }
    }
    return 0;
}