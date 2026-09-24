#include<bits/stdc++.h>
using namespace std;
int main () {
	int n,i,a[300000];
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		if(a[i]%2==0){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}