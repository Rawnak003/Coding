#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    int upper_count = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            break;
        } else {
            upper_count++;
        }
    }
    if (upper_count == word.length() || (upper_count == 1 && word[0] >= 'A' && word[0] <= 'Z')) {
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                cout << (char)(word[i] - 'a' + 'A');
            } else {
                cout << (char)(word[i] - 'A' + 'a');
            }
        }
    } else {
        cout << word;
    }
    return 0;
}
