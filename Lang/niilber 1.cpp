#include<bits/stdc++.h>
using namespace std;
long long a,b,t,s,i;
int main () {
	cin>>a>>b>>t;
	if(t==1){
		i=a;
		while(i<b){
			i++;
			if(i%2==1) s+=i;	
		}
	}
	else{
		i=a;
		while(i<b){
			i++;
			if(i%2==0) s+=i;
		}
	}
	cout<<s;
} 