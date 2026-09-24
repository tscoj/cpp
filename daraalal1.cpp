#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, x, a[100005], dp[1000005];
signed main(){
	cin >> n >> x;
	for(int i = 1; i <= x; i++){
		dp[i] = INT_MAX;
	}
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= x; j++){
			if(j - a[i] >= 0) dp[j] = min(dp[j], dp[j - a[i]] + 1);
		}
	}
	if(dp[x] == INT_MAX) cout << -1;
	else cout << dp[x];
 
}
