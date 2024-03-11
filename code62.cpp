#include <bits\stdc++.h>
using namespace std;

struct dragon {
    int strength;
    int bonus;
};

int cmpfunc(const void *a, const void *b) {
    const struct dragon *da = (const struct dragon *)a;
    const struct dragon *db = (const struct dragon *)b;
    return da->strength - db->strength;
}

int main() {
    int s, n;
    cin >> s >> n;

    struct dragon dragons[n];
    for (int i = 0; i < n; i++) {
        cin >> dragons[i].strength >> dragons[i].bonus;
    }

    qsort(dragons, n, sizeof(struct dragon), cmpfunc);
  
    for (int i = 0; i < n; i++) {
        if (s <= dragons[i].strength) {
            cout << "NO";
            return 0;
        }
        s += dragons[i].bonus;
    }

    cout << "YES";

    return 0;
}
