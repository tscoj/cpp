#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	
	bool f = false;  
	for(int i = 1; i <= n; i++) {
		if(i % 10 == 7 || i % 3 == 0) {
			cout << i << " ";
			f = true;
		}
	}
	
	if(f != true) cout << 0;
	
	return 0;
}