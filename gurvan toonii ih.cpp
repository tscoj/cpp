#include<bits/stdc++.h>
using namespace std;
int main () {
    int a, b, x, c, y;
    cin >> a >> b >> c;
    x = max(a, b);
    y = max(b, c);
    cout << max(x, y);
}