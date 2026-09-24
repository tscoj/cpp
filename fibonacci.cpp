#include <bits/stdc++.h>
using namespace std;

bool ok(const string&s,vector<int> c){
    for(char x:s){
        if(--c[x-'0']<0) return false;
    }
    return true;
}

int main(){
    vector<int> c(10);
    for(int&i:c) cin>>i;

    vector<string> f={"0","1"};
    int ans=-1;

    if(ok(f[0],c)) ans=0;
    if(ok(f[1],c)) ans=1;

    for(int i=2;;i++){
        string a=f[i-1],b=f[i-2],r="";
        int x=a.size()-1,y=b.size()-1,carry=0;
        while(x>=0||y>=0||carry){
            int s=carry;
            if(x>=0) s+=a[x--]-'0';
            if(y>=0) s+=b[y--]-'0';
            r.push_back(s%10+'0');
            carry=s/10;
        }
        reverse(r.begin(),r.end());
        if(r.size()>1000) break;
        f.push_back(r);
        if(ok(r,c)) ans=i;
    }

    cout<<ans;
}
