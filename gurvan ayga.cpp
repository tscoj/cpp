#include<bits/stdc++.h>
using namespace std;
int main () {
	int a[4], b[4], d;
	for(int i = 1; i <= 3; i++){
		cin >> a[i];
		b[i] = 0;
	}
	cin >> d;
	for(int i = 1; i <= 3; i++){
		if(a[i] < d){
			b[i] = a[i];
			d = d - a[i];
		} 
		else {
		b[i] = 	d;
		d = 0;
		}
	}
	for(int i = 1; i <= 3; i++){
		cout << b[i] << " ";
	}
	return 0;
}