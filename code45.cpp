#include <iostream>
using namespace std;
int main() 
{
    int n,odd_index, even_index,odd_count = 0, even_count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            even_count++;
            even_index = i + 1;
        } else {
            odd_count++;
            odd_index = i + 1;
        }
        if (odd_count > 1 && even_count == 1) {
            cout << even_index;
            return 0;
        } else if (even_count > 1 && odd_count == 1) {
            cout << odd_index;
            return 0;
        }
    }
    return 0;
}