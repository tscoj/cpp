#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n + 1);
    long long sum = 0;
    long long mx = 0, mx2 = 0;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];

        if(a[i] >= mx) {
            mx2 = mx;
            mx = a[i];
        }
        else if(a[i] > mx2) {
            mx2 = a[i];
        }
    }

    long long count = 0;

    for(int i = 1; i <= n; i++) {
        long long temp = sum - a[i];
        long long mx3 = mx;

        if(a[i] == mx) {
            mx3 = mx2;
        }

        if(mx3 == temp - mx3) {
            count++;
        }
    }

    cout << count << endl;

    for(int i = 1; i <= n; i++) {
        long long temp = sum - a[i];
        long long mx3 = mx;

        if(a[i] == mx) {
            mx3 = mx2;
        }

        if(mx3 == temp - mx3) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
