#include<bits/stdc++.h>
using namespace std;
int a[2000],n=1,i;
pair<int,int> P[2000];
int main () {
	while(cin>>a[n]){
		P[n].first=-a[n];
		P[n].second=n;
		n++;
	}
	n--;
	sort(P+1,P+n+1);
	for(i=1;i<=n;i++) cout<<P[i].second<<"\n";
	
}