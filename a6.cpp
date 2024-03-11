#include <bits\stdc++.h>
using namespace std;

int main() {
    unsigned int a, b;
    cin >> a >> b;
    
    unsigned int sum = 0;
    for (int i = 0; i < 32; i++) {
        unsigned int bit1 = (a >> i) & 1;
        unsigned int bit2 = (b >> i) & 1;
        
        sum |= (bit1 ^ bit2) << i;
    }
    
    cout << sum << endl;
    
    return 0;
}
