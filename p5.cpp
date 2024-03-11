#include <iostream>
using namespace std;
int main()
{
    int a,b,d,j,br=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        int con=0;
        j=i;
        while(j>0){
            d=j%10;
            if (d!=4 && d!=7) {
                con++;
            }
            j=j/10;
        }
        if(con==0){
            cout << i << " ";
            br++;
        }
    }
    if(br==0){
        cout << -1;
    }
    return 0;
}