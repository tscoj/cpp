#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> cnt(k + 2, 0);
    for(int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }

    vector<int> prefix(k + 2, 0);
    for(int i = 1; i <= k; i++) {
        prefix[i] = prefix[i-1] + cnt[i];
    }

    vector<int> answers(q); 

    for(int i = 0; i < q; i++) {
        string query;
        int val;
        cin >> query >> val;

        int ans = 0;
        if(query == "IH") {
            ans = n - prefix[val]; 
        } else if(query == "BAGA") {
            if(val > 0) ans = prefix[val-1];
            else ans = 0;
        } else if(query == "TENTSUU") {
            ans = cnt[val];
        }
        answers[i] = ans; 
    }

    
    for(int i = 0; i < q; i++) {
        cout << answers[i] << "\n";
    }

    return 0;
}
