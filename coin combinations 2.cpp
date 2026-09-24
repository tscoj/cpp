#include<bits/stdc++.h>
using namespace std;
int main () { 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
	const int MOD = 1e9 + 7;
	cin >> n >> x;
	vector<int> coins(n);
	for(int i = 0; i < n; i++){
		cin >> coins[i];
	}
	vector<long long> dp(x + 1, 0);
	dp[0] = 1;

	for(int coin : coins){
		for(int j = coin; j <= x; j++){
			dp[j] = (dp[j - coin] + dp[j]) % MOD;
		}
	}

	cout << dp[x] << "\n";
}