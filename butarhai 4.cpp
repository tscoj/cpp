#include<bits/stdc++.h>
using namespace std;
int main () {
	double a;
	cin >> a;
	int c, b;
	c = a * 10;
	c = c % 10;
	b = a * 100;
	b = b % 10;
	cout << b * c;
}