#include<bits/stdc++.h>
using namespace std;
int main() {
    double C;
    cin >> C;
    double left = 0.0, right = C;
    while (right - left > 1e-7) {
        double mid = (left + right) / 2;
        if (mid * mid + mid < C) {
            left = mid;
        } else {
            right = mid;
        }
    }

    cout << fixed << setprecision(9) << left << endl;
    return 0;
}