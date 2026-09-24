#i	+nclude <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n - a; b++) {
            int c = n - a - b;
            if (c > 0 && a + b > c && a + c > b && b + c > a) {
                cnt++;
            }
        }
    }
    cout << cnt;
}
+
++