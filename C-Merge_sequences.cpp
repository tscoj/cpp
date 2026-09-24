#include<bits/stdc++.h>
using namespace std;
int n, l, r, m, k, b[1000005], a[100005], c[300005];
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	for(int i = 1; i <= m; i++){
		cin >> c[i];
		b[i + n] = c[i];
	}
	l = 1;
	r = 1;
	k = 1;
	sort(b + 1, b + n + m + 1);
	for(int i = 1; i <= n + m; i++){
		if(b[i] == a[l]){
			cout << i << " ";
			l++;
		}
	}
	cout << endl;
	l = 1;
	for(int i = 1; i <= n + m; i++){
		if(b[i] == c[l]){
			cout << i << " ";
			l++;
		}
	}
}