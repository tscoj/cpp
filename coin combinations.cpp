#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for (int sum = 1; sum <= x; sum++) {
        for (int coin : c) {
            if (sum - coin >= 0) {
                dp[sum] = (dp[sum] + dp[sum - coin]) % MOD;
            }
        }
    }
    cout << dp[x] << '\n';
    return 0;
}
