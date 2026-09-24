#include <bits/stdc++.h>
using namespace std;
int n, i, j, k;
int main() {
    cin >> n;
    k = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cout << setw(3) << k++;
        }
        cout << "\n";
    }
    return 0;
}