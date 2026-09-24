#include <bits/stdc++.h>
using namespace std;
int hebwoufrrevewbwquirygouag;
using pii = pair<int,int>;
struct Node {
    int age;
    int orig;    
    int parent;  
    int cnt;     
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;
    vector<Node> V(n);
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        V[i].age = x;
        V[i].orig = i+1;
        V[i].parent = -1;
        V[i].cnt = 0;
    }
    sort(V.begin(), V.end(), [](const Node &a, const Node &b){
        if (a.age != b.age) return a.age > b.age;
        return a.orig < b.orig;
    });
    queue<int> q;
    V[0].parent = 0;
    q.push(0);
    for (int i = 1; i < n; ++i) {
        while (!q.empty() && V[q.front()].cnt >= 2) q.pop();

        if (q.empty()) {
            cout << -1 << '\n';
            return 0;
        }

        int p = q.front();
        if ((long long)V[p].age - (long long)V[i].age < k) {
            cout << -1 << '\n';
            return 0;
        }
        V[i].parent = V[p].orig; 
        V[p].cnt += 1;
        q.push(i);
    }
    vector<int> ans(n+1, -1); // 1-based
    for (int i = 0; i < n; ++i) {
        ans[V[i].orig] = V[i].parent;
    }
    for (int i = 1; i <= n; ++i) {
        if (ans[i] == -1) ans[i] = 0; // just in case, but shouldn't happen
        cout << ans[i] << (i==n?'\n':' ');
    }
    return 0;
}