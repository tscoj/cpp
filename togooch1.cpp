#include<bits/stdc++.h>
using namespace std;
int n,m,k;
long long a[305],b[305];
int main (){
	 cin>>n>>m>>k;
	 for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=k;i++) cin>>b[i];
    if(k<m){
	cout<<"Impossible";
	return 0;
	}
    long long need=0;
    for(int i=1;i<=n;i++) need+=a[i];
    sort(b+1,b+k+1);
    long long sum = 0;
    for(int i=1;i<=k;i++){
        sum+=b[i];
        if(i>=m && sum>=need){cout<<sum-need; 
		return 0; 
	}
    }
    cout<<"Impossible";
    return 0;
}

