#include <bits/stdc++.h>
using namespace std;

int main() {
    long long count = 0, n, a, na, m, x;

    cin >> n >> m;

    x = n;

    while (na != m) {

        na = 0;
        x++;

        n = x;

        while (n > 0) {
            a = n % 10;
            n = n / 10;
            na = na + a;
        }

        count++;
    }

    cout << count;

    return 0;
}