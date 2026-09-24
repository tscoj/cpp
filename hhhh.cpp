#include <bits/stdc++.h>
using namespace std;

int n,h[200005],r[200005],d[200005],pos[200005],keep[200005],x[200005],y[200005];
bool k[200005];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    if(!(cin>>n)) return 0;
    int i,j;
    for(i=0;i<n;i++){ cin>>h[i]; pos[i]=i+1; }
    for(i=0;i<n;i++) r[i]=h[i];
    sort(r,r+n,greater<int>());
    int cnt=0;
    for(i=0;i<n;i++) x[i]=lower_bound(r,r+n,h[i])-r+1;
    int t=0;
    for(i=0;i<n;i++){
        int l=0, r1=t-1, mid, idx;
        while(l<=r1){
            mid=(l+r1)/2;
            if(keep[mid]>=x[i]) r1=mid-1;
            else idx=mid,l=mid+1;
        }
        if(l>r1){ keep[t++]=x[i]; d[i]=t; }
        else{ keep[idx]=x[i]; d[i]=idx+1; }
    }
    int q=t;
    for(i=n-1;i>=0;i--){ if(d[i]==q){ k[pos[i]]=1; q--; } }
    cnt=0;
    for(i=0;i<n;i++) if(!k[pos[i]]) { y[cnt]=x[i]; x[cnt]=pos[i]; cnt++; }
    cout<<cnt<<"\n";
    for(i=0;i<cnt;i++) cout<<x[i]<<" "<<y[i]<<"\n";
}
