#include<bits/stdc++.h>
using namespace std;
int main () {
	int n,f[10000], s=0;
	//cin>>n;
	for(int n=1;n<=13;n++){
		s+=4*n*n*n-6*n*n+4*n+13;
	}
	cout<<s;
}