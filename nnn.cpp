#include <bits\stdc++.h>
#include <cstring>
using namespace std;

const int in = 8;

void find_vertical_word(char str[in][in]) {
    string word;

    for (int col = 0; col < in; col++) {
        for (int row = 0; row < in; row++) {
            if (str[row][col] != '.') {
                word += str[row][col];
            }
        }
    }

    cout << word << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        char str[in][in];
        for (int i = 0; i < in; i++) {
            for(int j = 0; j < in; j++){
                cin >> str[i][j];
            }
        }
        find_vertical_word(str);
    }

    return 0;
}
