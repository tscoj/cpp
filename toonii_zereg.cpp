#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    for (int a = 2; a * a <= n; a++) {
        int x = n;
        int m = 0;

        while (x % a == 0) {
            x /= a;
            m++;
        }

        if (x == 1) {
            cout << a << " " << m;
            return 0;
        }
    }

    cout << n << " " << 1;

    return 0;
}