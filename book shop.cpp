#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
int dp[100005], n, x, h[1005], s[1005];
int main () {
	IOS;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> h[i];
    for (int i = 1; i <= n; i++) cin >> s[i];
    
    for (int i = 1; i <= n; i++) {
        for (int j = x; j >= h[i]; j--) {
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }

    cout << dp[x] << "\n";
    return 0;
}