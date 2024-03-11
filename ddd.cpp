#include <bits\stdc++.h>
using namespace std;

void splitIntoSyllables(char word[], int n) {
    int i=0;
    while(i<n){
        if((word[i]=='b' || word[i]=='c' || word[i]=='c') && (word[i+1]=='a' || word[i+1]=='e')){
            cout << word[i] << word[i+1] <<".";
            i=i+2;
        }
        if((word[i]=='b' || word[i]=='c' || word[i]=='c') && (word[i+1]=='a' || word[i+1]=='e') && (word[i+2]=='b' || word[i+2]=='c' || word[i+2]=='c')){
            cout << word[i] << word[i+1] << word[i+2] <<".";
            i=i+3;
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char word[200005];
        cin >> word;

        splitIntoSyllables(word, n);
    }

    return 0;
}
