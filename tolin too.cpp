#include<bits/stdc++.h>
using namespace std;
int main () {
	int n, a;
	cin >> n;
	int l = n;
	int m = 0;
	while(n > 0){
		a = n % 10;
		m = m * 10 + a;
		n = n / 10;
	}
	if(m == l){
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}