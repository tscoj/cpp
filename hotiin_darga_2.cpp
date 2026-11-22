#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n + 1, 0), h(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
    }

    h[0] = 0;
    for (int i = 1; i <= n; i++) {
        int j = i - 1;
        while (j > 0 && h[j] < h[i]) {
            j = a[j];
        }
        a[i] = j;
    }

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " ";
        cout << a[i];
    }
    cout << "\n";

    return 0;
}