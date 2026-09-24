#include<bits/stdc++.h>
using namespace std;
int n,k,i,dp[89];
int main(){
	cin>>n>>k;
	dp[1]=1;
	dp[2]=2;
	for(i=3;i<=n;i++){
		if(k == i){
			dp[i] = 0;
		}
		else{
			dp[i]=dp[i-1]+dp[i-2];
		}
	}
	cout<<dp[n];
}
