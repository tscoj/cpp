#include<bits/stdc++.h>
using namespace std;
int main () {
	int a, b, c;
	cin >> a >> b >> c;
	double a1 = a, a2  = b, a3 = c;
	double d;
	d = (a1 + a2 + a3) / 3;
	cout << fixed << setprecision(1) << d;
}