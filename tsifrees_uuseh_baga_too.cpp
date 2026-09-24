#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,s=0;
    int a[100],i=0;
    cin>>n;
    while(n>0){
        a[i++]=n%10;
        n/=10;
    }
    sort(a,a+i);
    if(a[0]==0){
        for(int j=1;j<i;j++){
            if(a[j] != 0){
                swap(a[0], a[j]);
                break;
            }
        }
    }
    for(int j=0;j<i;j++){
        s=s*10+a[j];
    }
    cout<<s;
}