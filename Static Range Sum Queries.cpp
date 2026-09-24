#include<bits/stdc++.h>
using namespace std;
long long n,q,c,a[300000],d,b[300000];
int main () {
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=b[i-1]+a[i];
	}
	for(int i=1;i<=q;i++){
		cin>>c>>d;
		cout<<b[d]-b[c-1]<<endl;
	}
	return 0;
}