#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[5];
    int n;
    int s=0;
    cin >> n;
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a, a + 4);
    for(int i = 0; i <  4; i++){
    	if(a[i] <= n){
    		s++;
    		n -= a[i];
		}
	}
	cout << s;
	return 0;
}
