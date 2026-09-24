#include<bits/stdc++.h>
using namespace std;
int x, n, a[1900], b[200], l, j, k, g;
int main (){
	cin >> x;
	n = x;
	while(x > 0){
		a[++k] = x % 10;
		x /= 10;
	}
	sort(a + 1, a + k + 1);
	for(int i = n + 1; i <= (1e9); i++){
		j = i;
		l = 0;
		while(j > 0){
			b[++l] = j % 10;
			j /= 10;
		}
		sort(b + 1, b + l + 1);
		if(l > k){
			cout << 0;
			return 0;
		}
		g = 0;
		for(int h = 1; h <= l; h++){
			if(a[h] != b[h]) g = 1;
		}
		if(g == 0){
			cout << i;
			return 0;
		}
	}
}