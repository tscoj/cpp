#include<bits/stdc++.h>
using namespace std;
int n,m,k,cnt;
long long a[100005],b[100005],ne,pa;
int mainn() {
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	if(k<m) {
        cout <<"Impossible";
        return 0;
    }
    ne=0;
    for(int i=1;i<=n;i++) ne+=a[i];
    ne*=m;
    sort(b+1,b+k+1);
    pa=0;
    cnt=0;
    for(int i=1;i<=k;i++) {
        pa+=b[i];
        cnt++;
        if(cnt>=m && pa>=ne) {
            cout<<pa-ne;
            return 0;
        }
    }
    cout << "Impossible";
    return 0;
}
