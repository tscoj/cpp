#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for(int i = 1; i <= x; i++) {
        for(int j = 0; j < n; j++) {
            if(i - c[j] >= 0) {
                dp[i] += dp[i - c[j]];
                dp[i] %= 1000000007;
            }
        }
    }

    cout << dp[x] << endl;
}