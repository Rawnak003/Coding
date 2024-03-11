#include <bits\stdc++.h>
#include <string>
using namespace std;
int main() {
    string s; 
    string t; 
    cin >> s;
    int pos = 0;
    for (char c : s) {
        if (c == '0') {
            t.push_back('0');
            pos++;
        } 
        else if (c == '1') {
            t.push_back('1');
            pos++;
        } 
        else if (pos > 0) {
            t.pop_back();
            pos--;
        }
    }
    cout << t << endl;
    return 0;
}
