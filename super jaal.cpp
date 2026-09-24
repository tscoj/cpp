#include<bits/stdc++.h>
using namespace std;
int main () {
	long long n,dp[100],i;
	cin>>n;
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(i=4;i<=n;i++){
		dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
	}
	cout<<dp[n];
}
