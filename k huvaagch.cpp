#include<bits/stdc++.h>
using namespace std;

int main () {
	int n, k;
	cin >> n >> k;
	
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		int cnt = 0;
		for(int j = 1; j * j <= i; j++){
            if (i % j == 0) {
                cnt++;
                if (j != i / j) cnt++;
            }
        }
        if (cnt == k) sum += i;
		}
		
		cout << sum;
		
		return 0;
}
