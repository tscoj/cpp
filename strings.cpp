#include <bits/stdc++.h>
using namespace std;
int k, n, l, s, b, r, mid, a[150000];
int main(){
#define int long long
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	l=1;
	r=a[n];
	while(l<=r){
		mid=(l+r)/2;
		s=0;
		for(int i=1;i<=n;i++){
			s+=(a[i]/mid);
		}
		if(s>=k){
			l=mid+1;
			b=max(b,mid);
		}
		else{
			r=mid-1;
		}
	}
	cout<<b;
}