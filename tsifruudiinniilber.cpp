#include <bits/stdc++.h>
using namespace std;

long long sum(long long n) {
    long long s = 0;

    while (n > 0) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    long long n, t;
    cin >> n >> t;

    long long x = n;
    long long p = 1;
    long long count = 0;

    while (sum(x) > t) {
        long long a = (x / p) % 10;

        if (a != 0) {
            long long add = (10 - a) * p;

            x += add;
            count += add;
        }

        p *= 10;
    }

    cout << count << endl;
}