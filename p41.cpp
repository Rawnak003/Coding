#include <bits/stdc++.h>
using namespace std;
unsigned long long findXOR(unsigned long long n){
    unsigned long long mod = n % 4;
    if (mod == 0){
        return n;
    }
    else if (mod == 1){
        return 1;
    }
    else if (mod == 2){
        return n + 1;
    }
    else if (mod == 3){
        return 0;
    }
}
unsigned long long findXor(unsigned long long l, unsigned long long r){
    return (findXOR(l - 1) ^ findXOR(r));
}
int main(){
    unsigned long long a,b;
    cin >> a >> b;
    cout << findXor(a,b);

}