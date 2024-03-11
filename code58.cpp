#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    sort(s.begin(), s.end());
    auto it = unique(s.begin(), s.end());
    s.erase(it, s.end());

    int l=s.length();
    if(l==26){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}