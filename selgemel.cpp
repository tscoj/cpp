#include<bits/stdc++.h>
using namespace std;
int main () {
	long long a, b, c, d, n, s, sd;
	cin >> n;
	a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    sd = a + b + c + d;
    s = 6 * 1111 * s;
    cout << s << endl;
    return 0;
}