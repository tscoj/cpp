#include<bits/stdc++.h>
using namespace std;
int main () {
	int a;
	cin >> a;
	if(a % 7 == 1) cout << "1";
	if(a % 7 == 2) cout << "2";
	if(a % 7 == 3) cout << "3";
	if(a % 7 == 4) cout << "4";
	if(a % 7 == 5) cout << "5";
	if(a % 7 == 6) cout << "6";
	if(a % 7 == 0) cout << "7";
	return 0;
}