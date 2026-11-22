#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(m + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[x]++;
    }

    for (int i = 0; i <= m; i++) {
        if (a[i] > 0) {
            cout << i << ": " << a[i] << "\n";
        }
    }

    return 0;
}