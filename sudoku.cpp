#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 9; i++) {
        set<int> s;
        for (int j = 0; j < 9; j++) {
            if (a[i][j] < 1 || a[i][j] > 9 || s.count(a[i][j])) {
                cout << "NO";
                return 0;
            }
            s.insert(a[i][j]);
        }
    }
    for (int j = 0; j < 9; j++) {
        set<int> s;
        for (int i = 0; i < 9; i++) {
            if (s.count(a[i][j])) {
                cout << "NO";
                return 0;
            }
            s.insert(a[i][j]);
        }
    }
    for (int r = 0; r < 9; r += 3) {
        for (int c = 0; c < 9; c += 3) {
            set<int> s;
            for (int i = r; i < r + 3; i++) {
                for (int j = c; j < c + 3; j++) {
                    if (s.count(a[i][j])) {
                        cout << "NO";
                        return 0;
                    }
                    s.insert(a[i][j]);
                }
            }
        }
    }
    cout << "YES";
    return 0;
}
