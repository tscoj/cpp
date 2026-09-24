#include <bits/stdc++.h>
using namespace std;

int n, idx, i; 
long long h[200005], d[200005], tree[800020], ans=0, width, minD;
vector<int> st;

void build(int v,int l,int r){
    if(l==r) tree[v]=d[l];
    else{
        int m=(l+r)/2;
        build(v*2,l,m);
        build(v*2+1,m+1,r);
        tree[v]=min(tree[v*2],tree[v*2+1]);
    }
}

long long query(int v,int l,int r,int ql,int qr){
    if(ql>qr) return 1e9+7;
    if(l==ql && r==qr) return tree[v];
    int m=(l+r)/2;
    return min(query(v*2,l,m,ql,min(qr,m)),
               query(v*2+1,m+1,r,max(ql,m+1),qr));
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    for(i=1;i<=n;i++) cin>>h[i]>>d[i];

    build(1,1,n);

    h[n+1]=0;
    for(i=1;i<=n+1;i++){
        while(!st.empty() && h[st.back()]>=h[i]){
            idx=st.back(); st.pop_back();
            int l=st.empty()?1:st.back()+1;
            int r=i-1;
            width=r-l+1;
            minD=query(1,1,n,l,r);
            ans=max(ans,width*h[idx]*minD);
        }
        st.push_back(i);
    }

    cout<<ans<<"\n";
    return 0;
}
