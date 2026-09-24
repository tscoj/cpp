#include <bits/stdc++.h>
using namespace std;
int main () {
	int i, s=0;
	char st[4];
	for(i=0; i<4; i++) {
	cin>>st[i];
	}
	for (i=0; i<4; i++){
	if ('0'<=st[i] && st[i]<='9')
	s=s*10+st[i]-48;
	}
	cout<<pow(s,2)<<endl;
	return 0;
	}
