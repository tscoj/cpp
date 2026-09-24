#include <bits/stdc++.h>
using namespace std;
int n,a[11][11],k;
int main(){
    cin>>n;
    k=1;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=1;j<=n;j++) a[i][j]=k++;
        }else{
            for(int j=n;j>=1;j--) a[i][j]=k++;
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++) cout<<setw(3)<<a[i][j];
        cout<<"\n";
    }
    return 0;
}