#include<bits/stdc++.h>
using namespace std;
int a[10],i,j,c,d,k;
int main () {
	for(i=1;i<=4;i++){
		cin>>a[i];
	}
	sort(a+1,a+4);
	cout<<a[1]<<" "<<a[3]<<" "<<a[2]<<" "<<a[4];
}