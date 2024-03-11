#include<iostream>
#include<math.h>
using namespace std;
void infected (int n, int d, int x[], int y[], int z[], int i)
{
    int j;
    for (j = 0; j < n; j++) {
        if(z[j]==1 && (sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)))<=d) {
            z[j] = 1;
            infected (n, d, z, x, y, j);
        }
    }
}
 
int main()
{
    int n, d;
    cin >> n >> d;
    int x[n], y[n], z[n]={0};
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    z[0] = 1;
    infected(n, d, x, y, z, 0);
    for (int i = 0; i < n; i++) {
        if (z[i] == 0){
            cout << "No" << endl;
        }   
        else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}