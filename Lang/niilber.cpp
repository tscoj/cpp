#include<bits/stdc++.h>
using namespace std;
long long a,b,t,s,i;
int main () {
	cin>>a>>b>>t;
	if(t==1){
		for(i=a;i<=b;i++){
			if(i%2==1){
				s=s+i;
			}
		}
	}
	else{
		for(i=a;i<=b;i++){
			if(i%2==0){
				s=s+i;
			}
		}
	}
	cout<<s;
}