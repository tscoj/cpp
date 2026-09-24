#include<bits/stdc++.h>
using namespace std;
int n;
string st;
int main (){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>st;
		if(st=="you" ||st=="that"||st=="the"||st=="and"||st=="not"){
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
}