#include <bits/stdc++.h>
using namespace std;
int N, W, H, s;
int main() {
    cin >> N >> W >> H;
    double dia = sqrt(W * W + H * H);
    for (int i = 0; i < N; i++) {
        cin >> s;
        if (s <= dia)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
