#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define N 200005

ll n, m, dp[N][2], c[N], u, v, mx=-1e9;
vector<int>V[N];

void dfs(ll u, ll p){
	c[u] = p;
	//cout << p << " ";
	for(int i = 0; i < V[u].size(); i++){
		ll v = V[u][i];
		if(v != p) dfs(v,u);
	}
	return;
}

ll gogo(ll u, ll k){
	if(dp[u][k]!=-1) return dp[u][k];
	ll x=0, y=0;
	for(int i = 0; i < V[u].size(); i++){
		ll v = V[u][i];
		if(v != c[u]){
			ll t = gogo(v, 1)+1;
			if(y < t){
				x = y;
				y = t;
			}
			else 
			if(x < t) x = t;
		}
	}
	if(k == 0) dp[u][k] = x+y;
	else dp[u][k] = max(x, y);
	return dp[u][k];
}

int main(){ios;
	cin >> n;
	for(int i = 2; i <= n; i++){
		cin >> u >> v;
		V[u].pb(v);
		V[v].pb(u);
	}
	
	if(n == 1){
		cout << 0;
		return 0;
	}
	
	if(n == 2){
		cout << 1;
		return 0;
	}
	
	memset(dp, -1, sizeof(dp));
	dfs(1, -1);
	for(int i = 1; i <= n; i++){
		mx = max(mx, max(gogo(i, 0), gogo(i, 1)));
	}
	
	cout << mx;
	return 0;
}