#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while(n > 0) {
        int x = n;
        int mx = 0;

        while(x > 0) {
            mx = max(mx, x % 10);
            x /= 10;
        }

        n -= mx;
        count++;
    }

    cout << count;

    return 0;
}