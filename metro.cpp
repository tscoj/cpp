#include <bits/stdc++.h>
using namespace std;
int n, p, k, s;
int main(){
	cin >> n >> p >> k;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		s += a[i] / k;
		a[i] %= k;
	}
	sort(a + 1, a + n + 1);
	for(int i = n; i >= 1; i--){
		if(k - a[i] <= p && p > 0){
			s++;
			p -= (k - a[i]);
		}
	}
	cout << s;
}