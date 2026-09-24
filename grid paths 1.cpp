#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const long long MOD = 1e9 + 7;

    int n;
    cin >> n;

    
    vector<vector<char>> board(n + 1, vector<char>(n + 1));

    // Read the board
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }

    // DP table
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, 0));

    // Starting cell
    if (board[1][1] == '*') {
        cout << 0 << "\n";
        return 0;
    }

    dp[1][1] = 1;

    // Fill DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (board[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
            if (i > 1) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            if (j > 1) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
        }
    }

    cout << dp[n][n] << "\n";
    return 0;
}
