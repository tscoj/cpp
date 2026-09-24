#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main() {
	#define int long long
    int n;
    if (!(cin >> n)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    if (n <= 1) {
        cout << 0 << "\n";
        return 0;
    }
    vector<int> dp(n, 1);
    vector<int> parent(n, -1);
    int max_len = 0;
    int end_idx = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[i]) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
        }
        if (dp[i] > max_len) {
            max_len = dp[i];
            end_idx = i;
        }
    }
    unordered_set<int> keep_elements;
    int curr = end_idx;
    while (curr != -1) {
        keep_elements.insert(a[curr]);
        curr = parent[curr];
    }
    vector<int> target = a;
    sort(target.begin(), target.end(), greater<int>());
    vector<pair<int, int>> moves;
    for (int i = 0; i < n; i++) {
        int val = target[i];
        if (keep_elements.count(val)) {
            continue;
        }
        int current_pos = -1;
        for (int k = 0; k < a.size(); k++) {
            if (a[k] == val) {
                current_pos = k;
                break;
            }
        }
        moves.push_back({current_pos + 1, i + 1});
        a.erase(a.begin() + current_pos); 
        a.insert(a.begin() + i, val);     
    }
    cout << moves.size() << "\n";
    for (const auto& move : moves) {
        cout << move.first << " " << move.second << "\n";
    }
    return 0;
}