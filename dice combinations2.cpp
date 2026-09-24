#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int n, x;
int main () {
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    vector<int> dp(x + 1, 0);
    dp[1]=0;
    for (int j = 1; j <= x; j++) {
        for (int i = 0; i < n; i++) {
            if (j >= a[i]) {
                dp[j] = (dp[j] + dp[j - a[i]]) % MOD;
            }
        }
    }
    cout << dp[x] << endl;
}