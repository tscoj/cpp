#include<bits/stdc++.h>
using namespace std;
int main () {
    double a, b;
    cin >> a >> b;

    double ar = (a + b) / 2;
    double ge = sqrt(abs(a) * abs(b));

    cout << fixed << setprecision(1) << ar << endl << ge;

    cout << endl;
    return 0;
}