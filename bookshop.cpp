#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    cin >> n >> x;

    vector<int> page(n + 1);
    vector<int> price(n + 1);
    vector<int> dp(x + 1);

    for(int i = 1; i <= n; i++){
        cin >> price[i];
    }

    for(int i = 1; i <= n; i++){
        cin >> page[i];
    }

    for(int i = 1; i <= n; i++){
        for(int money = x; money >= price[i]; money--){
            dp[money] = max(dp[money], dp[money - price[i]] + page[i]);
        }
    }

    cout << dp[x];
}