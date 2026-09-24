#include<bits/stdc++.h>
using namespace std;
int n,l,i,k,a[100000];
int main () {
	cin>>n;
	for(i=1;i<=n;i++){
		l=i;
		while(l>0){
			k=l%10;
			l=l/10;
			a[k]=a[k]+1;
		}
	}
	for(i=0;i<=9;i++){
		cout<<a[i]<<endl;
	}
}