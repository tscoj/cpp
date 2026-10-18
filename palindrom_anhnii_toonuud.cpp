#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
	int original = n, reversed = 0;
	while(n > 0){
		int dig = n % 10;
		reversed = (reversed * 10) + dig;
		n = n / 10;
	} 
	return (reversed == original);
}

bool isPrime(int n) {
	if(n <= 1) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if(isPalindrome(i) && isPrime(i)){
			cout << i << endl;
		}
	}
	return 0;
}