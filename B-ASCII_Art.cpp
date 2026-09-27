#include <bits/stdc++.h>
using namespace std;
int a[200][200],i,j,m,n;
char c;
int main(){
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if (a[i][j] == 0) cout<<'.';
			else {c=a[i][j]+64; cout<<c;}
		}
		cout<<"\n";
		return 0;
	}
		
}