#include <bits/stdc++.h>
using namespace std;
int a[3500][3500], b[3500][3500], n, dewfnrhbfgewurhgubgyewrbgiugybwgbeyghuioghquio,m;
long long s;
string st[3500];
int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> st[i];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			a[i][j] += a[i][j - 1];
			if(st[i][j] == 'O') a[i][j]++;
			b[i][j] += b[i - 1][j];
			if(st[i][j] == 'I') b[i][j]++;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(st[i][j] == 'M') s = s + (b[n - 1][j] - b[i][j]) * (a[i][m - 1] - a[i][j]);
		}
	}
	cout << s;
}