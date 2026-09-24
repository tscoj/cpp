#include<bits/stdc++.h>
using namespace std;
int n,m,a,j,p,i,x,y;
int main(){
	cin>>n;
	x=n*(n-1);
	y=(n-1)*n;
	for(i=1;i<=n;i++){
		if(i%2==1){
			for(j=1;j<=n;j++){
				p=x+j;
				if(p>=10) cout<<" "<<p;
				else cout<<"  "<<p;
			}
			x-=2*n;
		}
		else{
			for(j=0;j<=n-1;j++){
				p=y-j;
				if(p>=10) cout<<" "<<p;
				else cout<<"  "<<p;
			}
			y-=2*n;
		}
		cout<<"\n";
	}
	
	

}