#include<bits/stdc++.h>
#define int long long
using namespace std;
int k=0, n;
signed main () {
	cin >> n;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			k++;
		}
	}
	if(k == 0 ){
		cout << "YES";
	}else{
		cout << "NO";
	}
}