#include<bits/stdc++.h>
using namespace std;
int n,m,k,f,d,c;
vector<int>v;
int main (){
	cin>>n>>m;
	for(int i=1;i*i<=n;i++){
		v.push_back(i);
		v.push_back(n/i);
	}
	for(int i=0;i<v.size();i++){
		if(m%v[i]==0){
			k=v[i];
			f=0;
			while(k>0){
				f+=k%10;
				k/=10;
			}
			if(d<f){
				d=f;
				c=v[i];
			}
		}
	}
	cout<<c;
return 0;	}

