#include <iostream>
#include<cstring>
using namespace std;

void lcs(string a, string b, int m, int n) {
    int table[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                table[i][j] = 0;
            } else if (a[i - 1] == b[j - 1]) {
                table[i][j] = table[i - 1][j - 1] + 1;
            } else {
                table[i][j] = max(table[i - 1][j], table[i][j - 1]);
            }
        }
    }
    int index = table[m][n];
    char l[index + 1];
    l[index] = '\0';
    int i = m, j = n;
    while (i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            l[index - 1] = b[j - 1];
            i--;
            j--;
            index--;
        } else if (table[i - 1][j] > table[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    cout << "S1 : ";
    for (int x = 0; x < m; x++) {
        cout << a[x];
    }
    cout << endl;
    cout << "S2 : ";
    for (int y = 0; y < n; y++) {
        cout << b[y];
    }
    int z = 0;
    cout << endl << "LCS : ";
    while (l[z] != '\0') {
        cout << l[z];
        z++;
    }
}

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    int m = a.length();
    int n = b.length();
    lcs(a, b, m, n);
    return 0;
}
