#include<bits\stdc++.h>
using namespace std;

void move(int n, char beg, char aux, char end){
    if(n==0){
        return;
    }
    move(n-1,beg,end,aux);
    cout << "move from " << beg << " to " << end << endl;
    move(n-1,aux,beg,end);
}

int main()
{
    int n;
    cin >> n;
    move(n,'A','B','C');
    return 0;
}