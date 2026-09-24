#include<bits/stdc++.h>
using namespace std;
int main () {
	int k = 1, n, s = 0;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if(i % 2 == 1){
			s = s + k;
		}
		else{
			s = s - k;
		}
		k = k * 2;
		cout << s << " ";
	}
	
	return 0;
}