#include <bits/stdc++.h>
#define N 200
#define int long long
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;

string st;
int n, dp[N][N];

int gogo(int l, int r){
    if(l == r) return dp[l][r] = 1; 
    if(l + 1 == r){
        if(st[l] == '(' && st[r] == ')') return dp[l][r] = 0;
        if(st[l] == '[' && st[r] == ']') return dp[l][r] = 0;
        if(st[l] == '{' && st[r] == '}') return dp[l][r] = 0;
        if(st[l] == '<' && st[r] == '>') return dp[l][r] = 0;
        return dp[l][r] = 2; 
    }
    if(dp[l][r] != -1) return dp[l][r];

    int mn = 1e18;
    if(st[l] == '(' && st[r] == ')') mn = min(mn, gogo(l + 1, r - 1));
    if(st[l] == '[' && st[r] == ']') mn = min(mn, gogo(l + 1, r - 1));
    if(st[l] == '{' && st[r] == '}') mn = min(mn, gogo(l + 1, r - 1));
    if(st[l] == '<' && st[r] == '>') mn = min(mn, gogo(l + 1, r - 1));

    for(int k = l; k < r; k++){
        mn = min(mn, gogo(l, k) + gogo(k + 1, r));
    }
    return dp[l][r] = mn;
}

signed main () {
    IOS;
    cin >> st;
    n = st.size();
    memset(dp, -1, sizeof(dp));
    cout << gogo(0, n - 1);
}