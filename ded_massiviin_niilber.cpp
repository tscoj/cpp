#include <bits/stdc++.h>
using namespace std;

int n;
long long k, sum;
set<long long> st;

int main() {
    cin >> n >> k;

    int ans = 0;
    sum = 0;
    st.insert(0);

    for(int i = 1; i <= n; i++) {
        long long x;
        cin >> x;

        sum += x;

        if(st.count(sum - k)) {
            ans++;
            st.clear();
            sum = 0;
            st.insert(0);
        }
        else {
            st.insert(sum);
        }
    }

    cout << ans << endl;

    return 0;
}
