#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main() {
    double C;
    cin >> C;
    double l = 0, r = C;
    while (r - l >1e-7) {
        double mid = (l + r) / 2;
        if (mid*mid +sqrt(mid)<C) l = mid;
        else r = mid;
    }
    cout << fixed << setprecision(9) << l << endl;
    return 0;
}