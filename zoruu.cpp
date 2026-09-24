#include<bits/stdc++.h>
using namespace std;
int main () {
    long long a[100000], n, s = 0, sa = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    
    for(int i = 1; i <= n; i++){
        s = s + a[i];
        sa = sa * a[i];
    }

    cout << max(sa, s) - min(sa, s) << endl;
     
    return 0;
}