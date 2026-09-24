#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long w,h,n;
	cin>>w>>h>>n;
    long long l=0,r=1;
    while(true){
        long long a=r/w,b=r/h;
        if(a!=0&&b!=0&&a>=(n+b-1)/b) break;
        r*=2;
    }
    while(l<r){
        long long m=l+(r-l)/2;
        long long a=m/w,b=m/h;
        if(a!=0&&b!=0&&a>=(n+b-1)/b) r=m; else l=m+1;
    }
    cout<<l;
}
