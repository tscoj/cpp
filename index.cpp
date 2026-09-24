#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[105];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mn = a[0];
    int mx = a[0];

    int mini = 0;
    int maxi = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < mn) {
            mn = a[i];
            mini = i;
        }

        if (a[i] > mx) {
            mx = a[i];
            maxi = i;
        }
    }

    cout << abs(maxi - mini) << endl;

    return 0;
}