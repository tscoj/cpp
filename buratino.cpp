#include <bits/stdc++.h>
using namespace std;
int a[11],i,n,l,k;
int main() {
    cin>>n;
    for(i=0;i<10;i++){
        a[i]=0;
    }
    i=1;
    while(i<=n){
        long long x=i;
        while(x>0){
            k=x%10;
            a[k]++;
            x/=10;
        }
        i++;
    }
    for(i=0;i<10;i++){
        cout<<a[i]<<endl;
    }
}
