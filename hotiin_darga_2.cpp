#include<bits/stdc++.h>
using namespace std;
int main () {
    int a[1000000], n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    int ans;
    for(int i = 1; i <= n; i++){
        ans = 0;
        for(int j = 1; j < i; j++){
            if(a[j] >= a[i])
            ans = j;
        }
        cout << ans << " ";
    }

    return 0;
}