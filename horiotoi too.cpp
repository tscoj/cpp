#include<bits/stdc++.h>
using namespace std;
int main () {
	int n, c;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		if(i % 3 == 0){
			int j = i;
			while(j > 0){
				cout << "*";
				j = j / 10;
				
			}
		}
		else {
			cout << i;
		}
		cout << endl;
	}
	
	return 0;
}