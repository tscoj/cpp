#include <bits/stdc++.h>
using namespace std;
long long s, n, k, dp[1000000];
int main(){
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	k = 1;
	s = 1;
	while(n >= s){
		k++;
		dp[k] = dp[k - 1] + dp[k - 2];
		s += dp[k];
	}
	cout << k - 1;
}