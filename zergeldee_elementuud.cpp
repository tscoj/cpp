#include <bits/stdc++.h>
using namespace std;

long long n, a[200005], b[200005], s1, s2;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    s1 = 0;
    s2 = 0;

    a[1]++;
    s1++;

    for (int i = 1; i < n; i++) {
        if ((a[i] + a[i + 1]) % 2 != 0) {
            a[i + 1]++;
            s1++;
        }

        if ((b[i] + b[i + 1]) % 2 != 0) {
            b[i + 1]++;
            s2++;
        }
    }

    cout << min(s1, s2);

    cout << endl;
    return 0;
}