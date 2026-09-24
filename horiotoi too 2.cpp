#include <bits/stdc++.h>
using namespace std;
void suma(int k) {
    int s = 0; 
    while (k > 0) {
        int e = k % 10;
        s = s + e;
        k = k / 10;
    }
    for (int l = 1; l <= s; l++) cout << "*";
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            if (i % a == 0) {
                suma(i);
            } else {
                cout << i;
            }
        } else { 
            if (i % b == 0) {
                suma(i);
            } else {
                cout << i;
            }
        }
        cout << endl;
    }

    return 0;
}
