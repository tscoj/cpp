#include<bits/stdc++.h>
using namespace std;
long long n,s,a[100],i,d,j;
int main (){
	cin>>n;
	while(n>0){
	a[i++]=n%10;
	n=n/10;
}
	sort(a,a+i,greater<int>());
	for(j=0;j<i;j++){
		s=s*10+a[j];
	}
cout<<s;
}
