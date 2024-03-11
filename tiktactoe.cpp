#include<bits\stdc++.h>
using namespace std;

int main()
{
    int counter = 0;
    int x,n=1;
    char a[5][5];

    // Initializing part

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i%2==0 && (j==1||j==3)){
                a[i][j]='|';
            }
            else if(i==1||i==3){
                a[i][j]='-';
            }
            else {
                a[i][j]='-';
            }
        }
    }
    while(n<=9){
        cin >> x;

        // Co-ordinating part.

        switch(x){
            case 1:
            {
                if(n%2==0){
                    a[0][0]='X';
                }
                else {
                    a[0][0]='O';
                }
                break;
            }
            case 2:
            {
                if(n%2==0){
                    a[0][2]='X';
                }
                else {
                    a[0][2]='O';
                }
                break;
            }
            case 3:
            {
                if(n%2==0){
                    a[0][4]='X';
                }
                else {
                    a[0][4]='O';
                }
                break;
            }
            case 4:
            {
                if(n%2==0){
                    a[2][0]='X';
                }
                else {
                    a[2][0]='O';
                }
                break;
            }
            case 5:
            {
                if(n%2==0){
                    a[2][2]='X';
                }
                else {
                    a[2][2]='O';
                }
                break;
            }
            case 6:
            {
                if(n%2==0){
                    a[2][4]='X';
                }
                else {
                    a[2][4]='O';
                }
                break;
            }
            case 7:
            {
                if(n%2==0){
                    a[4][0]='X';
                }
                else {
                    a[4][0]='O';
                }
                break;
            }
            case 8:
            {
                if(n%2==0){
                    a[4][2]='X';
                }
                else {
                    a[4][2]='O';
                }
                break;
            }
            case 9:
            {
                if(n%2==0){
                    a[4][4]='X';
                }
                else {
                    a[4][4]='O';
                }
                break;
            }
        }

        // Printing part.

        for(int i=0;i<5;i++){
            cout << "\t";
            for(int j=0;j<5;j++){
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        n++;

        // Matching or checking part

        if(a[0][0]=='O'||a[2][0]=='O'||a[4][0]=='O'||a[0][2]=='O'||a[0][4]=='O'){
            if( (a[0][0]==a[0][2] && a[0][0]==a[0][4])||
                (a[2][0]==a[2][2] && a[2][0]==a[2][4])||
                (a[4][0]==a[4][2] && a[4][0]==a[4][4])||
                (a[0][0]==a[2][0] && a[0][0]==a[4][0])||
                (a[0][2]==a[2][2] && a[0][2]==a[4][2])||
                (a[0][4]==a[2][4] && a[0][4]==a[4][4])||
                (a[0][0]==a[2][2] && a[0][0]==a[4][4])||
                (a[0][4]==a[2][2] && a[0][4]==a[4][0])) {
                counter = 1;
                break;
            }
        }
        else if(a[0][0]=='X'||a[2][0]=='X'||a[4][0]=='X'||a[0][2]=='X'||a[0][4]=='X'){
            if( (a[0][0]==a[0][2] && a[0][0]==a[0][4])||
                (a[2][0]==a[2][2] && a[2][0]==a[2][4])||
                (a[4][0]==a[4][2] && a[4][0]==a[4][4])||
                (a[0][0]==a[2][0] && a[0][0]==a[4][0])||
                (a[0][2]==a[2][2] && a[0][2]==a[4][2])||
                (a[0][4]==a[2][4] && a[0][4]==a[4][4])||
                (a[0][0]==a[2][2] && a[0][0]==a[4][4])||
                (a[0][4]==a[2][2] && a[0][4]==a[4][0])){
                counter = 2;
                break;
            }
        }
    }

    // Result part 

    if(counter == 1){
        cout << "Player 1 wins!!!" << endl;
    }
    else if(counter == 2){
        cout << "Player 2 wins!!!" << endl;
    }
    else if(counter == 0){
        cout << "The game is Draw!!!" << endl;
    }
    return 0;
}