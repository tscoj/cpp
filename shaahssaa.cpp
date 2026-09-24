#include <bits/stdc++.h>
using namespace std;
long long dp[100000], n;
int main(){
	cin >> n;
	dp[1] = 1;
	dp[2] = 1;
	for(int i = 3; i <= n; i++){
		dp[i]=dp[i-1] % 991+dp[i-2]%991;
	}
	cout << dp[n] % 991;
}