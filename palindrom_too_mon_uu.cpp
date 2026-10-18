#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int original = n, reversed = 0;
    while(n > 0) {
        int dig = n % 10;
        reversed = (reversed * 10) + dig;
        n/=10;
    }
    if(reversed == original) return true;
    else return false;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++) {
		if (isPalindrome(i)) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}