#include<bits/stdc++.h>
using namespace std;
int n,res=1,i;
int main () {
	cin>>n;
	for( i=1;i<6;i++){
		res*=n+i;
	}
	res=res/120;
	
	cout<<res;
}