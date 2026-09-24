#include <bits/stdc++.h>
using namespace std;
int n,b[105][105],dp[105][105];
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>b[i][j];
    dp[0][0]=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int k=b[i][j];
            if(i+k<n) dp[i+k][j]+=dp[i][j];
            if(j+k<n) dp[i][j+k]+=dp[i][j];
        }
    }
    cout<<dp[n-1][n-1]<<"\n";
}
