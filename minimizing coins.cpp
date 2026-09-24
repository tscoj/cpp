#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    const int INF = 1e9;
    vector<int> dp(x+1, INF);
    dp[0] = 0;

    for (int j = 1; j <= x; j++) {
        for (int c : coins) {
            if (j - c >= 0) {
                dp[j] = min(dp[j], dp[j-c] + 1);
            }
        }
    }

    if (dp[x] == INF) cout << -1;
    else cout << dp[x];
}