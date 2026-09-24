#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
int main(){
	const int MOD = 1e9 + 7;
	int n, x, coins[1000];
	cin >> n >> x;
	for(int i = 1; i <= n; i++){
		cin >> coins[i];
	}
	
	dp[0] = 1;
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= n; j++){
			int c = coins[j];
			if(i >= c){
				dp[i] = (dp[i] + dp[i - c]) % MOD;
			}
		}
			
	}
	
	cout << dp[x];
}