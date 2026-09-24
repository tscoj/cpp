#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    for (int j = 1; j <= n; j += 2) {
        for (int i = j; i <= n; i++) {
            dp[i] += dp[i - j];
        }
    }
    cout << dp[n];
    return 0;
}
