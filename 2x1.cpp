#include <bits/stdc++.h>
using namespace std;
int n, m, a[30][30], k;
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i < n; i++){
		k = 0;
		for(int j = 1; j <= m; j++){
			if(a[i][j] == a[i + 1][j]) k++;
		}
		if(k == 0){
			cout << "Yes";
			return 0;
		}
	}
	for(int i = 1; i < m; i++){
		for(int j = 1; j <= n; j++){
			if(a[j][i] == a[j][i + 1]) k++;
		}
		if(k == 0){
			cout << "Yes";
			return 0;
		}
		k = 0;
	}
	cout << "No";
}