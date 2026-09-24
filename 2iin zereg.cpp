#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	
	for(int i = 1; i * i <= n; i++){
		if(pow(2, i) == n){
			cout << i;
			return 0;
		}
	}
	cout << -1;
	
	return 0;
}