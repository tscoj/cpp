#include<iostream>
using namespace std;
int main () {
	int count,n,a;
	cin>>n;
	count=0;
	while(n>0){
		n/=10;
		count++;
		
	}
	cout<<count;
}
